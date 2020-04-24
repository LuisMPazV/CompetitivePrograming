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

//CF637D2A

int main(){
	int cases;
	
	
	cin>>cases;
	
	fore(i,0,cases){
		int n,a,b,c,d;
		
		cin>>n>>a>>b>>c>>d;
		
		int minAcum=(a-b)*n;		
		
		int maxAcum=(a+b)*n;
		
		if((minAcum>=(c-d)&&minAcum<=(c+d))||(maxAcum>=(c-d)&&maxAcum<=(c+d))||(minAcum<=(c-d)&&maxAcum>=(c+d))){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
		
		
	}
	
}
