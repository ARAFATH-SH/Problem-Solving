#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<n<<' ';
		for(int i=1; i<n; i++){
			cout<<i<<' '; 
		}
		cout<<endl;
	}
	return 0;
}