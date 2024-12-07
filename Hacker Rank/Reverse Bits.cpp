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
		unsigned int bits[32];
		for(int i=0; i<32; i++){
			bits[i] = (n>>i) & 1;
		}

		reverse(bits, bits+32);
		unsigned int ans = 0;
		for(int i=0; i<32; i++){
			if(bits[i]){
				ans += 1<<i;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}