#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;

	while(t--){
		int a,b; cin>>a>>b;
		int a_even = a/2;
		int a_odd = a - a_even;
		int b_even = b/2;
		int b_odd = b - b_even;

		cout<< (1ll*a_even*b_even) + (1ll*a_odd*b_odd)<<'\n';

	}

	return 0;
}