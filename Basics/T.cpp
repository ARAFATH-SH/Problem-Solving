#include<bits/stdc++.h>
using namespace std;

long long n,r,mod = 10000000+7;

long long store[30];


long long maxi = -1e9;

long long fac(long long x){
	if(x<=0) return 1;
	return store[x] = x*fac(x-1)%mod;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	store[0] = 1;
	fac(30);
	
	cin>>n>>r;

	if(n<r){
		cout<<0<<'\n';
	}
	else{
		cout<<store[n]/(store[r]*store[n-r])<<'\n';
	}

	return 0;
}