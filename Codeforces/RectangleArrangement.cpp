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
		int n;
		cin>>n;
		int x,y,max_r=0,max_c=0;
		for(int i=1; i<=n; i++){
			cin>>x>>y;
			max_r = max(max_r,x);
			max_c = max(max_c,y);
		}
		cout<<(max_r+max_c)*2<<'\n';

	}
	return 0;
}