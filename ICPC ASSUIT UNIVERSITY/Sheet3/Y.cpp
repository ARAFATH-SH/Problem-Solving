#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
const int N = 1e5+7;
long long prefix_sum[N];
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	long long n,q; cin>>n>>q;
	long long a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	prefix_sum[-1] = 0;
	for(int i=0; i<n; i++){
		prefix_sum[i] = prefix_sum[i-1] + a[i];
	}

	while(q--){
		long long int x,y;
		cin>>x>>y;
		x--;y--;
		
		long long sum = prefix_sum[y] - prefix_sum[x-1];

		cout<<sum<<'\n';
	}

	return 0;
}