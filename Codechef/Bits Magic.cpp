#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // this is a built in fucntion that's count all set bits
//__builtin_popcountll(); // this is a built in fucntion that's count all set bits for long long int

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/

	int t; cin>>t;
	while(t--){
		unsigned int n,k; cin>>n>>k;
		if((n>>k) & 1u){
		}
		else {
			n = n | (1u << k);
		}
			cout<<n<<endl;
	}
	
	return 0;
}

//time = O(t)
//space = O(1)