#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n,temp; cin>>n;

		map<int, int> m,mp;

		for(int i=0; i<n; i++){
			cin>>temp;
			m[temp]++;
		}
		for(int i=0; i<n; i++){
			cin>>temp;
			mp[temp]++;
		}

		if((m.size()+mp.size())>=4){
			cout<<"Yes\n";
		}
		else cout<<"No\n";
	}
	
	return 0;
}