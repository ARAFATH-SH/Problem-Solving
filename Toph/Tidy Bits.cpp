#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // this is a built in fucntion that's count all set bits
//__builtin_popcountll(); // this is a built in fucntion that's count all set bits for long long int

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n; cin>>n;
	int x = __builtin_popcount(n);
	for(int i=1; i<=n; i++){
		if(__builtin_popcount(i)==x){
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}