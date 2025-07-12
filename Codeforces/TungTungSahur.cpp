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
	int n; cin>>n;
	while(n--){
		string s1,s2;
		cin>>s1>>s2;

		int x = 0, y=0 ,f=0;

		while(x<s1.size() && y<s2.size()){

			int cont1 = 0, cont2 = 0;
			char p = s1[x];

			while(x<s1.size() && s1[x]==p){
				x++;
				cont1++;
			}
			while(y<s2.size() && s2[y]==p){
				y++;
				cont2++;
			}

			if(cont2<cont1 || cont2>cont1*2){
				f = 1;
				break;
			}
		}

		if(x!=s1.size() || y!= s2.size()) f=1;

		if(f) cout<<"NO\n";
		else cout<<"YES\n";

	}
	return 0;
}