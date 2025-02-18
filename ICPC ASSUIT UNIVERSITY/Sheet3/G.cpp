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

	vector<int>v(n);

	for(int i=0; i<n; i++){
		cin>>v[i];
	}

	vector<int>ve;
	for(int i=0; i<n; i++){
		ve.push_back(v[i]);
	}

	reverse(ve.begin(),ve.end());

	for(int i=0; i<n; i++){
		if(v[i]!=ve[i]){
			cout<<"NO\n";
			return 0;
		}
	}

	cout<<"YES\n";

	return 0;
}