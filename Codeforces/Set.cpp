#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		int l,r,k;
		cin>>l>>r>>k;
		cout<<max((r/k)-l+1,0)<<'\n';
	}
	return 0;
}