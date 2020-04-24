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

//CF637D2B

int main(){
	int cases;
	
	cin>>cases;
	
	fore(i,0,cases){
		
		int n,k;
		
		cin>>n>>k;
		
		int arr[n];
		
		fore(j,0,n){
			cin>>arr[j];
		}
		
		int min=0;
		int max=k-1;
		
		int maxCount=0;
		int index=0;
		
		int actual=0;
		fore(j,min+1,max){
			if(arr[j-1]<arr[j]&&arr[j]>arr[j+1]){
				actual++;
			}
		}
		maxCount=actual;
		
		
		min++;
		max++;
		while(max<n){
			if(arr[min-1]<arr[min]&&arr[min]>arr[min+1]){
				actual--;
			}
			if(arr[max-2]<arr[max-1]&&arr[max-1]>arr[max]){
				actual++;
			}
			if(actual>maxCount){
				maxCount=actual;
				index=min;
			}
			min++;
			max++;
		}
			
		cout<<(maxCount+1)<<" "<<(index+1)<<"\n";	
		
		
	}
	
}
