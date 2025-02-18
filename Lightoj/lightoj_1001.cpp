#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	while(n--){
		int a; cin>>a;
		if(a==0) cout<<0<<' '<<0<<'\n';
		else if(a<=10) cout<<0<<' '<<a<<'\n';
		else cout<<10<<' '<<(abs(10-a))<<'\n';
		}
	return 0;
}