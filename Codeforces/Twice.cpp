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
		vector<int>frequency(n+1);
		for(int i=1; i<=n; i++){
			int x;
			cin>>x;
			frequency[x]++;
		}
		int ans = 0;
		for(int i=1; i<=n; i++){
			ans+=frequency[i]/2;
		}
		cout<<ans<<'\n';
	}
	return 0;
}