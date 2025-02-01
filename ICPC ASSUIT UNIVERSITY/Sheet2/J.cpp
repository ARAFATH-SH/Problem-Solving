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

	int n; cin>>n;

	for(int i=2; i<=n; i++){
		if(is_prime(i)){
			cout<<i<<' ';
		}
	}
	
	return 0;
}