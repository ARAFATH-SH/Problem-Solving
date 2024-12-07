#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
const int N = 1e7 + 9;
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

	int n; cin>>n;
	long long ans = 0; 
	for(int i=1; i<=n; i++){
		ans = ans + 1LL * i * d[i];
	}
	cout<<ans<<'\n';

	return 0;
}