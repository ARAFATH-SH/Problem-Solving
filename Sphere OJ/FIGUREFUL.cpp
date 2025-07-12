#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	map<pair<int,int>,string>mp;
	while(n--){
		int x,y; cin>>x>>y;
		string name; cin>>name;
		mp[make_pair(x,y)]= name;
	}

	int m; cin>>m;

	while(m--){
		int x,y; cin>>x>>y;
		cout<<mp[make_pair(x,y)]<<'\n';
	}

	return 0;
}