#include <bits/stdc++.h>
typedef long long ll;
#define fore(i,a,b) for (int i = a; i < b; i++)
using namespace std;
//CF266-D2-A
int main(){
	
	string s;
	
	int n;
	cin>>n;
	cin>>s;
	
	int counter=0;
	
	fore(i,1,n){
		if(s[i-1]==s[i]){
			counter++;
		}
	}
	
	
	cout<<counter<<"\n";
	
	
	
	
	
	
}
