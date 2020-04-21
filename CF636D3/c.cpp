#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fore(i,a,b) for (int i = a; i < b; i++)





int main(){
	
	int cases;
	
	cin>>cases;
	
	fore(i,0,cases){
		int len;
		
		cin>>len;
		
		ll arr[len];
		
		bool positive=false;
		
		ll acum=0;
		ll actual=INT_MIN;
		
		fore(j,0,len){
			
			cin>>arr[j];
			if(j==0){
				if(arr[j]>0){
					positive=true;
					actual=arr[j];
				}else{
					positive=false;
					actual=arr[j];
				}
			}else{
				if(arr[j]>0){
					if(positive){
						actual=max(actual,arr[j]);
					}else{
						acum+=actual;
						positive=!positive;
						actual=arr[j];
					}
				}else{
					if(!positive){
						actual=max(actual,arr[j]);
					}else{
						acum+=actual;
						positive=!positive;
						actual=arr[j];
					}
				
				}
				
			}
			
			
			
		}
		acum+=actual;
		
		cout<<acum<<"\n";
		
		
	}
	
	
}
