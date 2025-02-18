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
		char s[20];
		cin>>s;
		int size = strlen(s);
		if(s[size-1]=='s' and s[size-2]=='u'){
			s[size-2] = 'i';
			s[size-1] = ' ';
		}
		cout<<s<<'\n';
	}

	return 0;
}