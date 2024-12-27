#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		
	long long int x,y;
	cin>>x>>y;

	int ans = 0;

	while(x<=y){
		ans++;
		x*=2;
	}
	cout<<ans<<'\n';
	return 0;
}