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



int main(){
	
	int cases;
	
	cin>>cases;
	
	
	fore(i,0,cases){
		
		int n;
		
		cin>>n;
		
		double x=(double)n/3.0;
		int k=3;
		while(x-(int)x!=0){
			
			x=(double)n/(pow(2,k)-1);
			k++;
		}
		
		cout<<(int)x<<"\n";
		
		
	}
	
	return 0;
}
