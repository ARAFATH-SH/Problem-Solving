#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	vector<tuple<int, int, int, int , int>>ve;
	
	for(int i=0; i<n; i++){
		int x,y,z,u,v; cin>>x>>y>>z>>u>>v;
		ve.push_back(make_tuple(x,y,z,u,v));
	}
	sort(ve.begin(),ve.end());

	for(auto[x,y,z,u,v]:ve){
		cout<<x<<' '<<y<<' '<<z<<' '<<u<<' '<<v<<'\n';
	}

	return 0;
}