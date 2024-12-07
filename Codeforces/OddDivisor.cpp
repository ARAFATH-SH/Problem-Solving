#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if((n&(n-1))==0) cout<<"NO\n";  //check power of 2 
		else cout<<"YES\n";
	}
	return 0;
}
