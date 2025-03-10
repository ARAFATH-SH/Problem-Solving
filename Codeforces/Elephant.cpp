#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	if(n%5==0){
		cout<<(n/5)<<'\n';
	}
	else{
		cout<<((n/5)+1)<<'\n';
	}
	
	return 0;
}