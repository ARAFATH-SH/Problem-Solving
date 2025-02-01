#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		long long n,fac=1; cin>>n;

		for(int i=1; i<=n; i++){
			fac*=i;
		}

		cout<<fac<<'\n';

	}
	
	return 0;
}