#include<bits/stdc++.h>
using namespace std;

const int N = 3e5+7;
int a[N];

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	map<int,int>mp;
	long long pair = 0;
	for(int j=1; j<=n; j++){
		pair += j - 1 - mp[a[j]];
		mp[a[j]]++;
	}

	cout<<pair<<'\n';

	return 0;
}