#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		if(n&1){
			for(int i=n; i>=1; i--){
				cout<<i<<' ';
			}
		}
		else cout<<-1;
		cout<<'\n';
	}
	
	return 0;
}