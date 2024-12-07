#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		int mini = 1e9,maxi=0;
		for(int i=1; i<=n; i++){
			mini = min(mini,a[i]);
			maxi = max(maxi,a[i]);
		}
		cout<<(maxi-mini)*(n-1)<<'\n';
	}
	return 0;
}