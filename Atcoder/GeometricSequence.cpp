#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n; cin>>n;
	long long a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	bool is_geomatric = true;

	for(int i=1; i+1<n; i++){
			if(1ll*a[i]*a[i]!=a[i+1]*a[i-1]){
				is_geomatric = false;
			}
		}
		cout<<(is_geomatric?"Yes\n":"No\n");
	
	return 0;
}