#include <bits/stdc++.h>

using namespace std;

//CF236-D2-A

int main(){
	string s;
	cin>>s;
	set<char> set;
	int len=s.length();
	for(int i=0;i<len;i++){
		set.insert(s[i]);
	}
	
	if(set.size()%2==0){
		cout<<"CHAT WITH HER!\n";
	}else{
		cout<<"IGNORE HIM!\n";
	}
}
