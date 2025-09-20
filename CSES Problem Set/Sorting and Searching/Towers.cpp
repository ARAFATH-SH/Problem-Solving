#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	multiset<int>tower_tops;

	for(int i=1; i<=n; i++){
		int x; cin>>x;
		auto it = tower_tops.upper_bound(x);
		if(it != tower_tops.end()){
			tower_tops.erase(it);
			tower_tops.insert(x);
		}
		else{
			tower_tops.insert(x);
		}
	}

	cout<<tower_tops.size();
	
	return 0;
}