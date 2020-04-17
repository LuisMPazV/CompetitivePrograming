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

//CF709-D2-A

int main(){
	
	int n,b,d;
	
	cin>>n>>b>>d;
	
	int acumd=0;
	int count=0;
	
	fore(i,0,n){
		int x;
		cin>>x;
		
		if(x<=b){
			acumd+=x;
			while(acumd>d){
				count++;
				acumd=0;
			}
		}
	}
	
	cout<<count<<"\n";
	return 0;
	
}
