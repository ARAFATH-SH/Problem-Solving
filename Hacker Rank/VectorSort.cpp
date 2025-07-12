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
	sort(v.begin(),v.end());
	for(auto x:v){
		cout<<x<<' ';
	}
	return 0;
}