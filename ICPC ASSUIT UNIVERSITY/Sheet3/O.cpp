#include<bits/stdc++.h>
using namespace std;

const int N = 51;
long long int a[N];

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	a[1] = 0;
	a[2] = 1;

	for(int i=3; i<=N; i++){
		for(int j=3; j<=i; j++){
			a[i] = 1ll * a[j-1] + a[j-2];
		}
	}
	
	int n; cin>>n;

	cout<<a[n]<<'\n';

	return 0;
}