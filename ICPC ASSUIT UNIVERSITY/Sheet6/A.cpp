#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int n; cin>>n;

	if(n&(n-1)){
		cout<<"NO";
	}
	else cout<<"YES";

	return 0;
}