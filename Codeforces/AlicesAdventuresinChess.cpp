#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		string str;
		cin>>str;
		bool is_true = false;
		int x = 0;
		int y = 0;
		for(int i=0; i<20; i++){
			for(int j=0; j<n; j++){

				if(str[j]=='N'){
					y = y+1;
				}
				else if(str[j]=='E'){
					x = x+1;
				}
				else if(str[j]=='S'){
					y = y-1;
				}
				else {
					x = x-1;
				}

				if(x==a && y==b){
				is_true = true;
				break;
				}
			}
		}
		if(is_true){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}

	return 0;
}