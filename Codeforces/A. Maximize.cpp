#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int ans = 0;
		int count = 0;
		for(int y=1; y<x; y++){
			int gccd = __gcd(x,y)+y;
			if(gccd>ans){
				ans = gccd;
				count = y;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}