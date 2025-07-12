#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long a,b,q;
	cin>>a>>b>>q;

	long long x = q%3;

	if(x==1) cout<<a<<'\n';
	else if(x==2) cout<<b<<'\n';
	else cout<<(a^b)<<'\n';

	return 0;
}