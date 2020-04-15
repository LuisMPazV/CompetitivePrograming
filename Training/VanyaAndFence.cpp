#include <bits/stdc++.h>
using namespace std;

//CF677-D2-A
int main(){
	
	int n,h;
	cin>>n>>h;
	int counter=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		counter+=(x>h);
	}
	
	cout<<n+counter<<"\n";
	return 0;
	
}
