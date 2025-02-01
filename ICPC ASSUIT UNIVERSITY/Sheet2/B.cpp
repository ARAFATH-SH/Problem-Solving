#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	if(n==1){
		cout<<-1<<'\n';
		return 0;
	}

	for(int i=2; i<=n; i+=2){
		cout<<i<<'\n';
	}
	
	return 0;
}