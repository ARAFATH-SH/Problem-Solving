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
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<n; i++){
			int maxi = INT_MIN;
			for(int j=i; j<n; j++){
				for(int k=i; k<=j; k++){
					maxi = max(maxi,a[k]);
				}
				cout<<maxi<<' ';
			}
		}
		cout<<'\n';
	}

	return 0;
}