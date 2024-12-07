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
		int l,r;
		cin>>l>>r;
		int x = l;
		int y = 2*l;
		if(y<=r)cout<<x<<' '<<y<<'\n';
		else cout<<-1<<' '<<-1<<'\n';
	}
	return 0;
}