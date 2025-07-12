#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	int m; cin>>m;

	v.erase(v.begin()+m-1);
	int y,z; cin>>y>>z;

	v.erase(v.begin()+y-1,v.begin()+z-1);

	cout<<v.size()<<'\n';
	for(auto x:v){
		cout<<x<<' ';
	}

	return 0;
}