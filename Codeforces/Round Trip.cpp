#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;

	while(t--){
		long long int r,x,d,n;
		cin>>r>>x>>d>>n;
			
		string s; cin>>s;
		int cont = 0;
		for(int i=0; i<n; i++){
			
			if(s[i]=='1'){
				r = max(r-d, 0ll);
				cont++;
			}
			else{
				if(r>=x) continue;
				else{
					r = max(r-d, 0ll);
					cont++;
				}
			}
		}
		cout<<cont<<'\n';
	}

	return 0;
}