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
		int n,m,l,r; cin>>n>>m>>l>>r;
		int cont = 0;
		for(int i=l; i<=0; i++){
			for(int j=0; j<=r; j++){
				if(j-i == m){
					cout<<i<<' '<<j<<'\n';
					cont++;
					break;
				}
			}
			if (cont)
			{
				break;
			}
		}

	}
	return 0;
}
