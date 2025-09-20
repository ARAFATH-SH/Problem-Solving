#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		int v[n+1];
		for(int i=1; i<=n; i++){
			cin>>v[i];
		}

		sort(v+1,v+n+1);
	
		long long ans = 0;
		for(int i=1; i<=n; i++){
			if(v[i]>=2){
				ans++;
			}
			else if(v[i]==1 and v[i+1]==1){
				ans++;
				i++;
			}
			else ans++;
		}
		cout<<ans<<'\n';
	}
	return 0;
}