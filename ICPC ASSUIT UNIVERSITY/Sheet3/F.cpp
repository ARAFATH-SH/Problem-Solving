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

	reverse(v.begin(),v.end());

	for(int i=0; i<n; i++){
		cout<<v[i]<<' ';
	}
	
	return 0;
}