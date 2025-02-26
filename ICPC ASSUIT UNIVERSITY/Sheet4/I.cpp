#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; getline(cin,s);
	string st;

	st = s;

	reverse(st.begin(),st.end());

	for(int i=0; i<s.size(); i++){
		if(s[i]!=st[i]){
			cout<<"NO\n";
			return 0;
		}
	}

	cout<<"YES\n";
	
	return 0;
}