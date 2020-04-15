#include <bits/stdc++.h>

using namespace std;

//CF344-D2-A

int main(){
	
	
	int n;
	cin>>n;
	
	int numGruops=1;
	
	string s;
	cin>>s;
	char last=s[1];
	
	for(int i=1;i<n;i++){
		cin>>s;
		if(s[0]==last){
			numGruops++;
			last=s[1];
		}
	}
	
	cout<<numGruops<<"\n";
	
	return 0;
	
	
	
}
