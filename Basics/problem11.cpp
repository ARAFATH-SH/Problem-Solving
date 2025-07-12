#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	map<int,int>mp;
	while(n--){
		string s; cin>>s;
		int x; cin>>x;
		if(s=="add"){
			mp[x]++;
		}
		else{
			if(mp.find(x) != mp.end()){
				mp[x]--;
				if(mp[x]==0){
					mp.erase(x);
				}
			}
		} 
		cout<<mp.size()<<' ';
	}
	
	return 0;
}