#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n,k;
	cin>>n>>k;
	while(k--){
		if(n%10 == 0){
			n/=10;
		}
		else{
			n-=1;
		}
	}
	cout<<n<<'\n';
	return 0;
}