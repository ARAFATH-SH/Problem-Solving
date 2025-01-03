#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b,n,t;
	cin>>t;

	while(t--){
		cin>>a>>b>>n;

		switch(n%3){
		case 0:
			cout<<a<<'\n';
			break;
		case 1:
			cout<<b<<'\n';
			break;
		default:
			cout<<(a^b)<<'\n';
		}
	}
	
	return 0;
}