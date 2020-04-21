#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fore(i,a,b) for (int i = a; i < b; i++)


// CPP code for printing shortest path between 
// two vertices of unweighted graph 
#include <bits/stdc++.h> 
using namespace std; 

// utility function to form edge between two vertices 
// source and dest

multiset<string> setEdges;
void add_edge(vector<int> adj[], int src, int dest) 
{ 
	adj[src].PB(dest); 
	adj[dest].PB(src); 
} 

// a modified version of BFS that stores predecessor 
// of each vertex in array p 
// and its distance from source in array d 
bool BFS(vector<int> adj[], int src, int dest, int v, 
							int pred[], int dist[]) 
{ 
	// a queue to maintain queue of vertices whose 
	// adjacency list is to be scanned as per normal 
	// DFS algorithm 
	list<int> queue; 

	// boolean array visited[] which stores the 
	// information whether ith vertex is reached 
	// at least once in the Breadth first search 
	bool visited[v]; 

	// initially all vertices are unvisited 
	// so v[i] for all i is false 
	// and as no path is yet constructed 
	// dist[i] for all i set to infinity 
	for (int i = 0; i < v; i++) { 
		visited[i] = false; 
		dist[i] = INT_MAX; 
		pred[i] = -1; 
	} 

	// now source is first to be visited and 
	// distance from source to itself should be 0 
	visited[src] = true; 
	dist[src] = 0; 
	queue.push_back(src); 

	// standard BFS algorithm 
	while (!queue.empty()) { 
		int u = queue.front(); 
		queue.pop_front(); 
		for (int i = 0; i < adj[u].size(); i++) { 
			if (visited[adj[u][i]] == false) { 
				visited[adj[u][i]] = true; 
				dist[adj[u][i]] = dist[u] + 1; 
				pred[adj[u][i]] = u; 
				queue.push_back(adj[u][i]); 

				// We stop BFS when we find 
				// destination. 
				if (adj[u][i] == dest) 
				return true; 
			} 
		} 
	} 

	return false; 
} 

// utility function to print the shortest distance 
// between source vertex and destination vertex 
void printShortestDistance(vector<int> adj[], int s, 
									int dest, int v) 
{ 
	// predecessor[i] array stores predecessor of 
	// i and distance array stores distance of i 
	// from s 
	int pred[v], dist[v]; 

	if (BFS(adj, s, dest, v, pred, dist) == false) 
	{ 
		cout << "Given source and destination"
			<< " are not connected"; 
		return; 
	} 

	// vector path stores the shortest path 
	vector<int> path; 
	int crawl = dest; 
	path.push_back(crawl); 
	while (pred[crawl] != -1) { 
		path.push_back(pred[crawl]); 
		crawl = pred[crawl]; 
	}
	// printing path from source to destination 
	fore(k,1,path.size()){
		int first=path[k-1];
		int second=path[k];
		
		if(first>second){
			setEdges.insert(second+" "+first);
		}else{
			setEdges.insert(first+" "+second);
		}
	} 
} 




int main(){
	int numCases;
	
	cin>>numCases;
	
	fore(i,0,numCases){
		clearenv();
		int n,m,a,b,c;
		a--;
		b--;
		c--;
		cin>>n>>m>>a>>b>>c;
		
		vector<int> adj[n]; 
		int prices[m];
		
		fore(j,0,m){
			cin>>prices[j];
		}
		
		fore(j,0,m){
			int f,s;
			
			cin>>f>>s;
			f--;
			s--;
			add_edge(adj, f, s); 
		}
		printShortestDistance(adj, a, b, n);
		printShortestDistance(adj, b, c, n);
		sort(prices,prices+m);
		
		set<string> my_set(setEdges.begin(), setEdges.end());
		vector<string> my_vec(my_set.begin(), my_set.end());
		sort(my_vec.begin(), my_vec.end(), [&](const string &i1, const string &i2) {return setEdges.count(i1) < setEdges.count(i2);});
		int acum=0;
		for(int j=my_vec.size()-1;j>=0;j--){
			acum+=setEdges.count(my_vec[j])*prices[(my_vec.size()-1)-j];
		}
		
		
		cout<<acum<<"\n";
		setEdges.clear();
		
		
	}
	
	
	
	
	
	
}
