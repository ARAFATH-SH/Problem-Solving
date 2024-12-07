#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

bool can_reach(long long n){
	if(n==1) return true;
	if(n%10==0){
		if(can_reach(n/10)){
			return true;
		}
	}
	if(n%20==0){
		if(can_reach(n/20)){
			return true;
		}
	}
	return false;
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long long  n;
		cin>>n;
		if(can_reach(n)){
			cout<<"YES"<<'\n';
		}
		else cout<<"NO"<<'\n';
	}
	return 0;
}