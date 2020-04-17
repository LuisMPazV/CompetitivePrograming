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

//UVA 10110
int main(){
	ll n;
	
	cin>>n;
	
	while(n!=0){
		ll sq=(ll)sqrt(n);
		if(sq*sq==n){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}
			
		cin>>n;
	}
	return 0;
}
