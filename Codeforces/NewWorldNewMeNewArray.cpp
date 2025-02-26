#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n,k,p; cin>>n>>k>>p;

		if(k==0){
			cout<<'0'<<'\n';
			continue;
		}

		double div = ceil((abs(k)/(double)p));
		if(n>=div){
			cout<<div<<'\n';
		}
		else cout<<-1<<'\n';
	}
	
	return 0;
}