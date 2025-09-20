#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		int even=0,odd=0;
		for(int i=0; i<n; i++){
			int stones; cin>>stones;
			if(stones%2==0){
				even++;
			}
			else odd++;
		}
		int even_pos = n/2;
		int odd_pos = n - even_pos;

		if((even>=even_pos and odd>=odd_pos) or (odd>=even_pos and even>=odd_pos)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";

	}

	
	return 0;
}