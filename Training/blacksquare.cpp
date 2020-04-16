#include <bits/stdc++.h>
typedef long long ll;

#define fore(i,a,b) for (int i = a; i < b; i++)

using namespace std;

//CF431-D2-A

int main(){
	
	
	int a1,a2,a3,a4;
	
	cin>>a1>>a2>>a3>>a4;
	
	string s;
	cin>>s;
	int len=s.length();
	int acum=0;
	fore(i,0,len){
		if(s[i]=='1'){
			acum+=a1;
		}else if(s[i]=='2'){
			acum+=a2;
		}else if(s[i]=='3'){
			acum+=a3;
		}else if(s[i]=='4'){
			acum+=a4;
		}
	}
	cout<<acum<<"\n";
	
	return 0;
	
	
	
	
}
