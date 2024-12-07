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
	int n;
	cin>>n;
	string str;
	cin>>str;

	int x = sqrt(n);
			
	if(n != x*x){
		cout<<"No\n";
	}
	else{
		int z=-1;
		for(int i=0; i<n; i++){
			if(str[i]=='0'){
				z = i-1;
				break;
			}
		}
		if(z==-1){
			if(n==4) cout<<"Yes\n";
			else cout<<"No\n";
		}

		else{
			if(z==n/z) cout<<"Yes\n";
			else cout<<"No\n";
			}
		}
	}
	return 0;
}