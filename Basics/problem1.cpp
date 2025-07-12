#include<bits/stdc++.h>
using namespace std;

double distance(int x, int y){
	return sqrt(x * x + y * y);
}


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	vector<pair<double,pair<int,int>>>v;
	
	for(int i=0; i<n; i++){
		int x,y; cin>>x>>y;
		v.push_back(make_pair(distance(x,y),make_pair(x,y)));
	}
	sort(v.begin(),v.end());

	for(auto p : v){
		cout<<p.second.first<<' '<<p.second.second<<'\n';
	}

	return 0;
}