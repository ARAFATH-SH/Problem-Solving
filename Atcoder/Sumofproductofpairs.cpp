#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5 + 5;
const int mod = 1e9+7;
long long suffix_sum[N];

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=n-1; i>0; i--){
		suffix_sum[i] = a[i] + suffix_sum[i+1];
		suffix_sum[i] %= mod;
	}
	long long sum  = 0;
	for (int i = 0; i <n; ++i)
	{
		long long value = a[i] * suffix_sum[i+1];
		value%=mod;
		sum+=value;
		sum%=mod;
	}
	cout<<sum<<'\n';
	return 0;
}