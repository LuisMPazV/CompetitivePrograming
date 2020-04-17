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


//CF294-D2-A
int main(){
	
	int n;
	cin>>n;
	
	vi wires;
	fore(i,0,n){
		int x;
		cin>>x;
		
		wires.PB(x);
	}
	int numShots;
	
	cin>>numShots;
	
	fore(i,0,numShots){
		int index,numbirds;
		cin>>index;
		cin>>numbirds;
		index=index-1;
		int up=wires[index]-numbirds;
		int down=numbirds-1;
		wires[index]=0;
		if(index-1>=0){
			wires[index-1]+=down;
		}
		if(index+1<wires.size()){
			wires[index+1]+=up;			
		}
	}
	fore(i,0,wires.size()){
		
		cout<<wires[i]<<"\n";
	}
	return 0;
	
}
