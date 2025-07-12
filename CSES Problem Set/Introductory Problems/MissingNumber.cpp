#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	sort(a,a+n-1);

	for(int i=1; i<=n; i++){
		if(a[i-1]!=i){
			cout<<i<<'\n';
			return 0;
		}
	}

	return 0;
}
