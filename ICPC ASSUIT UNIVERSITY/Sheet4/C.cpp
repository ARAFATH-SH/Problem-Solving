#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s1,s2; cin>>s1>>s2;

	if(s1>s2) cout<<s2;
	else cout<<s1;

	return 0;
}