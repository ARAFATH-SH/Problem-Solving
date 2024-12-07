#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		if(n%i==0){
			cout<<i<<endl;
		}
	}
	return 0;
}