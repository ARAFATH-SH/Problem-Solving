#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin>>s;

	bool yes = false;
	for (int i = 0; i < s.size(); ++i)
	{
		if((s[i]=='&' || s[i]=='?') && !yes){
			yes = true;
			continue;
		}
		if(yes){
			if(s[i]!='=' && s[i]!='&') cout<<s[i];
			if(s[i]=='='){
				cout<<": ";
			}
			if(s[i]=='&'){
				cout<<'\n';
			}
		}
	}

	return 0;
}