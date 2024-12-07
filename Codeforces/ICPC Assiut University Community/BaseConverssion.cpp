#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

void Recursion(int n){

	if(n==0) return;
	int mod = n%2;
	int division = n/2;
	Recursion(division);
	cout<<mod;
}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Recursion(n);
		cout<<'\n';
	}
	return 0;
}