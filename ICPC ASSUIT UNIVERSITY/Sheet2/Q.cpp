#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;

	while(t--){
		int n; cin>>n;

		if(n==0) cout<<0;

		while(n){
			cout<<(n%10)<<' ';
			n/=10;
		}
		cout<<'\n';
	}

	return 0;
}