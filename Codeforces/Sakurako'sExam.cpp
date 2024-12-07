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
		int a,b;
		cin>>a>>b;

		if(a&1){
			cout<<"NO\n";
		}
		else{
			if(a!=0){
				cout<<"YES\n";
			}
			else{
				if(b&1){
					cout<<"NO\n";
				}
				else{
					cout<<"YES\n";
				}
			}
		}
	}
	return 0;
}