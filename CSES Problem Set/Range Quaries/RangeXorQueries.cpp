#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

const int N = 2e5 + 9;
int a[N];
int prefix_XOR[N];

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n,q;
	cin>>n>>q;

	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	prefix_XOR[0] = 0;
	for(int i=1; i<=n; i++){
		prefix_XOR[i] = prefix_XOR[i-1] ^ a[i];
	}

	while(q--){
		int a,b;
		cin>>a>>b;
		cout<< (prefix_XOR[b] ^ prefix_XOR[a-1]) <<endl;
	}

	return 0;
}