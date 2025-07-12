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
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout<<s[0];
		for(int i=1; i<s.size(); i++){
			if(s[i]==' '){
				cout<<s[i+1];
			}
		}
		cout<<'\n';
	}
	return 0;
}