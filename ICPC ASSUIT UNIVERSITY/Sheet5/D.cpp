#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
	if(n==1){
		return false;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0 and n!=2){
			return false;
		}
	}
	return true;
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		if(is_prime(n)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	
	return 0;
}