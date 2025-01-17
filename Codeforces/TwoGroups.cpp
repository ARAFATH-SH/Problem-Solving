#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;

	while(t--){
		int n; cin>>n;
		long long s1 =0 ,s2 = 0;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];

			if(a[i]>=0) s1+=a[i];
			else s2+=a[i];
		}
		long long mini = min(s1, abs(s2));
		long long maxi = max(s1, abs(s2));

		cout<<maxi-mini<<'\n';
	}

	return 0;
}