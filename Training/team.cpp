#include <bits/stdc++.h>

using namespace std;

//CF231-D2-A

int main(){
	
	int n;
	cin>>n;
	
	int problems_solved=0;
	
	for(int i=0; i<n;i++){
		
		int counter=0;
		for(int j=0;j<3;j++){
			int num;
			cin>>num;
			counter+=num;
		}
		if(counter>=2){
			problems_solved++;
		}
		
	}
	
	cout<<problems_solved<<"\n";
	
	return 0;
	
}
