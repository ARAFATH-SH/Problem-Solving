#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s; cin>>s;
		int dot = 0;
		
		for(int i=0; i<n; i++){
			if(s[i]=='.'){
				
				dot++;
			}
			
			if(s[i]=='.' and s[i+1]=='.' and s[i+2]=='.'){
				dot=2;
				break;
			}
		}

		if(dot==2){
			cout<<2<<'\n';
		}
		else cout<<dot<<'\n';

	}
	
	return 0;
}