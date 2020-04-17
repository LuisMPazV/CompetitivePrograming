#include <bits/stdc++.h>
typedef long long ll;

#define fore(i,a,b) for (int i = a; i < b; i++)

using namespace std;


//CF268-D2-A
int main(){
	
	
	int n;
	cin>>n;
	multiset<int> guest;
	multiset<int> home;
	
	fore(i,0,n){
		int h,g;
		
		cin>>h>>g;
		home.insert(h);
		guest.insert(g);
	}
	
	int count=0;
	
	for(auto x:home){
		
		count+=guest.count(x);
	}
	
	
	cout<<count<<"\n";
	
	return 0;
	
}
