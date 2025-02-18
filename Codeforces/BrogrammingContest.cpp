#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int tt; cin>>tt;

	while(tt--){
		int n; cin>>n;

		string s; cin>>s;

		int cont = 0;
		for(int i=1; i<n; i++){
			if(s[i]!=s[i-1]){
				cont++;
			}
		}
		if(s[0]=='1') cont++;

		cout<<cont<<'\n';
	}

	return 0;
}