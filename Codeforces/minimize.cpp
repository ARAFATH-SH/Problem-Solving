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
		cout<<(-a+b)<<endl;
	}
	return 0;
}