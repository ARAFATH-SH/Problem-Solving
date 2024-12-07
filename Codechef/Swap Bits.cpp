#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // this is a built in fucntion that's count all set bits
//__builtin_popcountll(); // this is a built in fucntion that's count all set bits for long long int

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		unsigned int ans = 0;
		for(int k=0; k<32; k+=2){
			int a = (n>>k)&1;
			int b = (n>>(k+1))&1;
			swap(a,b);
			if(a){
				ans += 1<<k;
			}
			if(b){
				ans += 1<<(k+1);
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
//time = O(t * 32)
//space = O(1)