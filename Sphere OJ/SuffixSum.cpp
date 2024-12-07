#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
const int N = 10e5 + 9;
int a[N];
long long suffix_sum[N];

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}	
	suffix_sum[n+1] = 0;
	for(int i=n; i>=1; i--){
		suffix_sum[i] = suffix_sum[i+1] + a[i];
	}

	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		l++,r++;
		long long sum = suffix_sum[l] - suffix_sum[r+1];
		cout<<sum<<endl;
	}

	return 0;
}