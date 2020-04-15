#include <bits/stdc++.h>

using namespace std;

//CF59-D2-A

int main(){
	string word;
	
	cin>>word;
	int upper=0;
	int lower=0;
	
	int len=word.length();
	for(int i=0;i<len;i++){
		if(word[i]>='a'&&word[i]<='z'){
			lower++;
		}else{
			upper++;
		}
		
	}
	
	if(upper>lower){
		transform(word.begin(),word.end(),word.begin(),::toupper);
	}else{
		transform(word.begin(),word.end(),word.begin(),::tolower);
	}
	
	cout<<word<<"\n";
	
	
}
