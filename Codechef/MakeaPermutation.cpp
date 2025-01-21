#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int a[N];

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
		 	cin>>a[i];
		}
		sort(a,a+n);
		int ans = 0;
		if(a[0]>n) ans++;

		for(int i=1; i<=n; i++){
			if(a[i]>n) ans++;
			else if(a[i]==a[i-1]) ans++;
		}
		cout<<ans<<'\n';
	}
	
	return 0;
}