#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];

	int g = 0; 
	for(int i=0; i<n; i++){
		g = __gcd(g,a[i]); 
	}
	cout<<g<<'\n';
	
	return 0;
}