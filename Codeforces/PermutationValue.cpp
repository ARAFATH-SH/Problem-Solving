#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<1<<' '<<n;

		for(int i=2; i<n; i++){
			cout<<' '<<i;
		}
		cout<<'\n';
	}

	return 0;
}