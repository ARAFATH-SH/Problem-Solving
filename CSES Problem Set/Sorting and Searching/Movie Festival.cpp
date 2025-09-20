#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	vector<pair<int,int>>v;

	for(int i=0; i<n; i++){
		int x,y; cin>>x>>y;
		v.push_back({x,y});
	}

	sort(v.begin(),v.end(),[](pair<int,int>x,pair<int,int>y){
		return x.second<y.second;
	});
	
	int last_end=-1,ans=0;
	for(auto[start,end]:v){
		if(start>=last_end){
			last_end=end;
			ans++;
		}	
	}

	cout<<ans<<'\n';

	return 0;
}