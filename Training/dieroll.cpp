//CF9-D2-A

#include <bits/stdc++.h>
typedef long long ll;

#define fore(i,a,b) for (int i = a; i < b; i++)

using namespace std;



static int GCD(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return GCD(b % a, a); 
} 

int main(){
	int a,b;
	cin>>a>>b;
	
	
	int ma=max(a,b);
	
	ma=6-ma+1;
	int gcd=GCD(ma,6);
	
	cout<<(ma/gcd)<<"/"<<(6/gcd)<<"\n";

	
	
}
