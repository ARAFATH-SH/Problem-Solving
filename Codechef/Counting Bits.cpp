#include<bits/stdc++.h>
using namespace std;

/*int count_set_bit(int x){
	int count = 0;
	for(int k=0; k<=10; k++){
		if((x>>k)&1){
			count++;
		}
	}
	return count;
}
*/
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int ans = 0;
		for(int i=1; i<=n; i++){
			ans+= __builtin_popcount(i); // this is a built in fucntion that is count all set bits
			/*ans+= count_set_bit(i);*/ //O(log(n))
		}
		cout<<ans<<endl;
	}
	return 0;
}