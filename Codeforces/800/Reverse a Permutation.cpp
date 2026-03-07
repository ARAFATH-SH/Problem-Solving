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
		int n; cin>>n;
		vector<int>v(n);

		for(int i=0; i<n; i++){
			cin>>v[i];
		}

		vector<int>copy = v;

		sort(copy.rbegin(),copy.rend());

		int l =0 , r=0;
		int key = 0;

		for(int i=0; i<n; i++){
			if(v[i]!=copy[i]){
				key = copy[i];
				l = i;
				for(int j = i; j<n; j++){
					if(key == v[j]){
						r = j;
						break;
					}
				}
			}
		}
		v.reverse(l,r);
		for(auto x: v){
			cout<<x<<' ';
		}
		cout<<'\n';

	}

	return 0;
}