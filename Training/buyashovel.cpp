#include <bits/stdc++.h>
typedef long long ll;

#define fore(i,a,b) for (int i = a; i < b; i++)

using namespace std;

//CF732-D2-A

int main(){
	
	
	int k,r;
	cin>>k>>r;
	
	
	int count =1;
	int acum=k;
	while(acum%10!=r&&acum%10!=0){
		acum+=k;
		count++;
	}
	
	cout<<count<<"\n";
	
	return 0;
	
	
}
