#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
long long Fac(long long x){
	if(x==0) return 1;
	else return x * Fac(x-1);
}
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	long long n;
	cin>>n;
	cout<<Fac(n)<<endl;
	return 0;
}