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
	
	int v,e; cin>>v>>e;
	set<pair<int,int>>st;
	int ans = 0;
	while(e--){
		int x,y; cin>>x>>y;

		if(x==y || (st.count({x,y}) && st.count({y,x}))){
			ans++;
		}
		st.insert({x,y});
		st.insert({y,x});
	}
	cout<<ans<<'\n';
	return 0;
}