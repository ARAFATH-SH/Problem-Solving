#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1) cout<<0<<'\n';
		else{
			cout<<'1' + string(n-1,'0')<<'\n';
		}
	}
	return 0;
}