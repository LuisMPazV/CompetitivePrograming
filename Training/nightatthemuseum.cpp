#include <bits/stdc++.h>
typedef long long ll;

#define fore(i,a,b) for (int i = a; i < b; i++)

using namespace std;

//CF731-D2-A

int main(){
	
	string s;
	
	cin>>s;
	
	char last='a';
	
	int acum=0;
	fore(i,0,s.length()){
		
		acum+=min(abs(last-s[i]),26-abs(last-s[i]));
		last=s[i];
	}
	
	cout<<acum<<"\n";
	
	return 0;
	
	
	
}
