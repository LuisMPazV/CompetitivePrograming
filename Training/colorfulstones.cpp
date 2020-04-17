#include <bits/stdc++.h>
typedef long long ll;

#define fore(i,a,b) for (int i = a; i < b; i++)

using namespace std;

//CF265-D2-A

int main(){
	
	string s;
	string orders;
	
	cin>>s;
	cin>>orders;
	
	
	int index=0;
	fore(i,0,orders.length()){
		if(s[index]==orders[i]){
			index++;
		}
		
	}	
	
	
	cout<<(index+1)<<"\n";
	
	return 0;
}
