#include<bits/stdc++.h>
using namespace std;



int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	
	int store = 1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<store<<' ';
			store+=1;
		}
		cout<<'\n';
	}
	
	return 0;
}