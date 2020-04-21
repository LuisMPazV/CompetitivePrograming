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
		
		if((len/2)%2==0){
			int arr[len];
			int acumEven=0;
			int acumOdd=0;
			fore(j,0,len/2){
				arr[j]=2*(j+1);
				acumEven+=arr[j];
				arr[len/2+j]=2*(j+1)-1;
				acumOdd+=arr[len/2+j];
			}
			acumOdd-=arr[len-1];
			arr[len-1]=acumEven-acumOdd;
			cout<<"YES\n";
			cout<<arr[0];
			
			fore(j,1,len){
				cout<<" "<<arr[j];
			}
			cout<<"\n";
			
		}else{
			
			cout<<"NO\n";
		}
		
	}
	
}
