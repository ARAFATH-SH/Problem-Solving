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
		char s[105];
		cin>>s;

		bool flag = false;
		for(int i=0; i<strlen(s); i++){
			if(s[i]==s[i+1]){
				flag = true;
			}
		}
		
		if (flag)
		{
			cout<<1<<'\n';
		}
		else cout<<(strlen(s))<<'\n';

	}

	return 0;
}