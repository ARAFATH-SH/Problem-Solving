#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char c; cin>>c;
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<a[i]; j++){
			cout<<c;
		}
		cout<<'\n';
	}
	
	return 0;
}