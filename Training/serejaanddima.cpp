#include <bits/stdc++.h>

using namespace std;
//CF381-D2-A
int main(){
	
	int n;
	
	cin>>n;
	
	int arr[n];
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int min=0;
	int max=n-1;
	int sereja=0;
	int dima=0;
	
	bool seneja=true;
	
	while(min<=max){
		if(seneja){
			seneja=!seneja;
			if(arr[min]>arr[max]){
				sereja+=arr[min];
				min++;
			}else{
				sereja+=arr[max];
				max--;
			}
			
		}else{
			seneja=!seneja;
			if(arr[min]>arr[max]){
				dima+=arr[min];
				min++;
			}else{
				dima+=arr[max];
				max--;
			}
		}
	}
	
	cout<<sereja<<" "<<dima<<"\n";
	return 0;
	
	
	
}
