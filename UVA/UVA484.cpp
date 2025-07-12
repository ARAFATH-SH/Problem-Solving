#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<int,int>mp;
	vector<int>v;
	int n;
	while(cin>>n){
		if(mp[n]==0){
			v.push_back(n);
		}
		mp[n]++;
	}
	
	for(auto x: v){
		cout<<x<<' '<<mp[x]<<'\n';
	}

	return 0;
}