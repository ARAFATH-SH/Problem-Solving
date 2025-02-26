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
		string s1,s2,s3; cin>>s1>>s2;
		int len1 = s1.size();
		int len2 = s2.size();
		int len = max(len1,len2);

		for(int i=0; i<len; i+=1){
			if(i<len1){
				cout<<s1[i];
			}
			if(i<len2){
				cout<<s2[i];
			}
		}
		
		cout<<'\n';

	}

	return 0;
}