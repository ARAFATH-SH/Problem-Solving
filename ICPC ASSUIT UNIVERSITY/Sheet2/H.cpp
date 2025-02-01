#include<bits/stdc++.h>
using namespace std;

bool is_prime(int x){
	for(int i=2; i<x; i++){
		if(x%i==0) return false;
	}
	return true;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x; cin>>x;

	if(is_prime(x)) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}