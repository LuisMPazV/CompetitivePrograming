#include <bits/stdc++.h>

using namespace std;

//CF734-D2-A
int main(){
	int games;
	cin>>games;
	string s;
	cin>>s;
	int anton=0;
	int danik=0;
	
	for(int i=0;i<games;i++){
		if(s[i]=='A'){
			anton++;
		}else{
			danik++;
		}
		
	}
	
	if(anton>danik){
		cout<<"Anton\n";
	}else if(danik>anton){
		cout<<"Danik\n";
	}else{
		cout<<"Friendship";
		
	}
	
	
}
