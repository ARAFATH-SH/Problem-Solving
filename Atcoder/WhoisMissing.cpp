#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,m;
	cin>>n>>m;

	int a[m];
	for(int i=1; i<=m; i++){
		cin>>a[i];
	}
	
	vector<int>v(n+1);

	for(int i=1; i<=m; i++){
		v[a[i]]++;
	}

	cout<<(v.size()-m-1)<<'\n';

	for(int i=1; i<=n; i++){
		if(v[i]==0) cout<<i<<' ';
	}

	return 0;
}