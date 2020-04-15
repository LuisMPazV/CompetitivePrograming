#include <bits/stdc++.h>

using namespace std;

//CF263-D2-A
int main(){
	
	
	int r,c=0;
	bool end=false;
	for(int i=1;i<=5&&!end;i++){
		for(int j=1;j<=5&&!end;j++){
			int x;
			cin>>x;
			if(x){
				r=i;
				c=j;
				end=true;
			}
		}
	}
	
	r=abs(r-3);
	c=abs(c-3);
	cout<<(r+c)<<"\n";
	
	return 0;
	
}
