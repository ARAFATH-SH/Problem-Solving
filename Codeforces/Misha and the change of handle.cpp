#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	map<string,string>mp;

	while(n--){
		string s1,s2;
		cin>>s1>>s2;

		if(mp.find(s1)!=mp.end()){
			mp[s2] = s1;
		}
		else{
			mp[s2] = mp [s1];
			mp.erase(s1);
		}

	}
	cout<<mp.size()<<'\n';

	for(auto [username,owner_name] : mp){
		cout<<owner_name<<' '<<username<<'\n';
	}
	
	return 0;
}