#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int b[2*n+5];
		memset(b,0,sizeof(b));

		bool store[2*n+5];
		memset(store,0,sizeof(store));

		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				int x; cin>>x;
				store[x] = 1;
				b[i+j] = x;
			}
		}
		n*=2;
		for(int i=1; i<=n; i++){
			if(!store[i]) b[1] = i;
		}

		for(int i=1; i<=n; i++){
			cout<<b[i]<<' ';
		}
		cout<<'\n';
	}
	return 0;
}