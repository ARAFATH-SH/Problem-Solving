#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a, pair<int,int>b){
	auto [x1,y1] = a;
	auto [x2,y2] = b;
	if(x1>x2){
		return true;
	}
	else if(x1==x2){
		if(y1<y2){
			return true;
		}
	}
	return false;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		vector<pair<int,int>>v;
		for(int i=0; i<n; i++){
			int x,y; cin>>x>>y;
			v.push_back(make_pair(x,y));
		}
		sort(v.begin(),v.end(),comp);
		reverse(v.begin(),v.end());
		for(auto[x,y]:v){
			cout<<x<<' '<<y<<'\n';
		}
	}

	return 0;
}