#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	for(int i=1; i<=12; i++){
		cout<<n<<" * "<<i<<" = "<<n*i<<'\n';
	}
	
	return 0;
}