#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
const int m = 1e9+7;
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; 
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int fac = 1;
		for(int i=1; i<=n; i++){
			fac = (1LL * fac * i)%m;
		}
		cout<<fac<<'\n';
	}
	return 0;
}