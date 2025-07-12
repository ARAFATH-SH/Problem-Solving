#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;

	while(t--){
		int x; cin>>x;
		if(__builtin_popcount(x)==1){
			cout<<-1<<'\n';
			continue;
		}

		int z = 0;
		int unset_bit = 0, set_bit = 0;

		for(int mask=0; mask<=31; mask++){
			if(x & (1<<mask)){
				if(unset_bit==1 and set_bit==0){
					z |= 1<<mask;
					set_bit = 1;
				}
			}
			else{
				if(unset_bit==0){
					z |= 1<<mask;
					unset_bit = 1;
				}
			}
		}

		if(set_bit){
			int y = x^z;
			cout<<y<<'\n';
		}
		else {
			cout<<-1<<'\n';
		}

	}
	return 0;
}