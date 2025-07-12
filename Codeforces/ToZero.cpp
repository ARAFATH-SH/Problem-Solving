#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;

	while(t--){
		int n,k,ans = 0;
		cin>>n>>k;
		int cont = 0;
		if(n&1){
			n = n-k;
			ans++;
		}
		ans+=n/(k-1);
		if(n%(k-1)!=0) ans++;
		cout<<ans<<'\n';
	}

	return 0;
}