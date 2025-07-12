#include<bits/stdc++.h>
using namespace std;

const int N = 19;
long long int factorial[N];

long long fac(int n){
	if(n==0) return 1;
	else if(n==1){
		return 1;
	}
	else return factorial[n] = 1ll* n * fac(n-1);
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b; cin>>a>>b;

	int maxi = max(a,b);
	int mini = min(a,b);

	long long afac = fac(maxi);
	long long bfac = fac(mini);
	long long cfac = fac(maxi-mini);
	
	cout<< afac/(bfac * cfac)<<' '<< afac/cfac<<'\n';

	return 0;
}