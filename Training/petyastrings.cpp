#include <bits/stdc++.h>


using namespace std;
//CF112-D2-A

int main(){
	string first, second;
	
	cin>>first;
	cin>>second;
	transform(first.begin(),first.end(),first.begin(),::tolower);
	transform(second.begin(),second.end(),second.begin(),::tolower);
	
	
	int result;
	result=first.compare(second);
	
	if(result==0){
		cout<<"0\n";
	}else if(result<0){
		cout<<"-1\n";
	}else{
		cout<<"1\n";
	}
	return 0;
	
}
