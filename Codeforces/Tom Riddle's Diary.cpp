#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;
	set<string>se;
	while(t--){
		string s;
		cin>>s;
		if(se.find(s)!=se.end()){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
			se.insert(s);
		}
	}
	
	return 0;
}