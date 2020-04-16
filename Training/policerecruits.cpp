#include <bits/stdc++.h>
typedef long long ll;

#define fore(i,a,b) for (int i = a; i < b; i++)

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	int counter=0;
	int police=0;
	
	fore(i,0,n){
		int actual;
		
		cin>>actual;
		
		if(actual>0){
			police+=actual;
			
		}else{
			police+=actual;
			
			if(police<0){
				counter+=abs(police);
				police=0;
			}
			
		}
	}
	
	
	
	cout<<counter<<"\n";
	
	return 0;
}
