#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b; cin>>a>>b;

	int gcd = __gcd(a,b);

	cout<<gcd<<' '<<(1ll*a*b)/gcd<<'\n';
	
	return 0;
}