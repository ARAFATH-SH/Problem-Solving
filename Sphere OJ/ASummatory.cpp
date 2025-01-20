#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+3,N = 1e6+9;

int f(int n){
	int sum_of_n = (1ll*n*(n+1)/2)%mod;
	return 1ll * sum_of_n * sum_of_n % mod;
}
int prefix[N];
int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for(int i=1; i<N; i++){
		prefix[i] = (prefix[i-1] + f(i)) % mod;
	}
	
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<prefix[n]<<'\n';
	}

	return 0;
}