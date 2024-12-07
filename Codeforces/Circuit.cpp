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
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		int t=0;
		bool f;
		for(int i=1; i<=2*n; i++){
			cin>>f;
			if(f)t++;
		}
		cout<<(t&1)<<' '<<min(t,n*2-t)<<'\n';
	}
}