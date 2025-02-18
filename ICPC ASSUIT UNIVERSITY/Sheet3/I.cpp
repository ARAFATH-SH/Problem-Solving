#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		int mini = INT_MAX;
		for(int i=1; i<n; i++){
			int sum = 0;
			for(int j=i+1; j<=n; j++){
				mini = min(mini, (a[i]+a[j]+j-i));
			}
		}
		cout<<mini<<'\n';
	}

	return 0;
}