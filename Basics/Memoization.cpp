#include<bits/stdc++.h>
using namespace std;

int Memo[20];

int fibonacci(int n){
	if(n<=1){
		return n;
	}
	if(Memo[n]!=-1){
		return Memo[n];
	}
	// cout<<"Before: "<<Memo[n]<<'\n';

	Memo[n] = fibonacci(n-1) + fibonacci(n-2);
	
	// cout<<"After: "<<Memo[n]<<'\n';
	return Memo[n];
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	memset(Memo,-1,sizeof(Memo));

	cout<<fibonacci(n)<<'\n';

	return 0;
}