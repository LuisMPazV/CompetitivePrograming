#include <bits/stdc++.h>
typedef long long ll;

#define fore(i,a,b) for (int i = a; i < b; i++)

using namespace std;

//CF228-D2-A

int main(){
	
	
	set<int> set;
	
	fore(i,0,4){
		int x;
		cin>>x;
		set.insert(x);
	}	
	
	
	int needed=4-set.size();
	
	cout<<needed<<"\n";
	
	return 0;
	
}
