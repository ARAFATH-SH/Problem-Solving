#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	vector<int> v(n+1);
	for(int i=1; i<=n; i++){
		cin>>v[i];
	}
	set<int>se;

	for(int i=1; i<=n; i++){
		se.insert(v[i]);
		cout<<se.size()<<' ';
	}
	
	return 0;
}