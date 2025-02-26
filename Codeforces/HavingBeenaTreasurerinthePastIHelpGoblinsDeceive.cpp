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
	
	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		string s; cin>>s;
		int u=0,h=0;
		for(int i=0; i<n; i++){
			if(s[i]=='-'){
				h++;
			}
			else u++;
		}

		if(h%2==0){
			cout<< (1ll * h/2 * u * h/2)<<'\n';
		}
		else cout<<(1ll * h/2 * u * (h/2+1))<<'\n';

	}

	return 0;
}