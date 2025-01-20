#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		cout<<max(n,m)+1<<'\n';
	}
	
	return 0;
}