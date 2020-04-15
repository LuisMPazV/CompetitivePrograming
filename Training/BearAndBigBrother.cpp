#include <bits/stdc++.h>


using namespace std;

//CF791-D2-A

int main(){
	int a,b;
	cin>>a>>b;
	int counter=0;
	
	while(a<=b){
		a*=3;
		b*=2;
		counter++;
	}
	
	cout<<counter<<"\n";
	return 0;
}
