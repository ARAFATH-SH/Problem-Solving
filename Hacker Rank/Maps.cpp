#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	map<string,int>mp;

	while(n--){
		int x; cin>>x;
		string name; cin>>name;
		if(x==1){
			int mark; cin>>mark;
			mp[name]+=mark;
		}
		else if(x==2){
			mp[name]=0;
		}
		else{
			cout<<mp[name]<<'\n';
		}
	}

	return 0;
}