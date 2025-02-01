#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	for(int i=1; i<=n; i++){
		if(n%i==0){
			cout<<i<<'\n';
		}
	}

	return 0;
}