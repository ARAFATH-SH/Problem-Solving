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
		for(int i=0; i<n-2; i++){
			cin>>a[i];
		}
		bool is_true = true;
		for(int i=0; i<n-4; i++){
			if(a[i]==1 && a[i+1]==0 && a[i+2]==1){
				is_true = false;
			}
		}
		if(!is_true){
			cout<<"NO\n";
		}
		else cout<<"YES\n";

	}

	return 0;
}