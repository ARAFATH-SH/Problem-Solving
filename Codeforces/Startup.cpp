#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+7;
int sum[N];
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		memset(sum,0,sizeof(sum));
		for(int i=1; i<=k; i++){
			int b,c;
			cin>>b>>c;
			sum[b]+=c;
		}
		sort(sum,sum+k+1);
		int ans = 0;
		for(int i=k; i>max(0,k-n); i--){
			ans+=sum[i];
		}
		cout<<ans<<'\n';
	}
	return 0;
}