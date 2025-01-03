#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int tc;
	cin>>tc;

	while(tc--){
		int n,k;
		cin>>n>>k;

		int a[n];
		int res = -1;

		for (int i = 1; i <= n; i++)
		{
			cin>>a[i];
			res&=a[i];
		}

		(res<k)?cout<<"YES\n":cout<<"NO\n";

	}

	return 0;
}