#include<bits/stdc++.h>
using namespace std;

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1];
		int index = 0;
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		long long int ans = 0;
		for(int i=1; i<n; i++){
			ans = max(ans, 1LL * a[i] * a[i+1]);
		}
		cout<<ans<<endl;
	}
	return 0;
}