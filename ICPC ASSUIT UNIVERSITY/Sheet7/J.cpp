#include<bits/stdc++.h>
using namespace std;

long long fac(long long n){
	if(n<=0) return 1;
	return fac(n-1)*n;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n; cin>>n;

	cout<<fac(n);
	
	return 0;
}