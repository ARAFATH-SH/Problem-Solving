#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
const int N = 1e6 +7;
int d[N]; 
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int i=1; i<N; i++){
		for(int j=i; j<N; j+=i){
			d[j]++;
		}
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<d[n]<<'\n';	
	}
	return 0;
}