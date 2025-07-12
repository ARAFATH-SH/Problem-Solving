#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	multiset<int>ml;

	for(int i=1; i<=n; i++){
		int x; cin>>x;
		ml.insert(x);
	}
	int m; cin>>m;

	for(int i=1; i<=m; i++){
		int x; cin>>x;
		auto it = ml.find(x);
		if(it!=ml.end()){
			ml.erase(it);
		}
	}
	cout<<ml.size();
	return 0;
}