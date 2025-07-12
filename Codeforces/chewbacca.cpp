#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin>>s;
	long long int x = 9 - (s[s.size()-1] - '0');
	
	for(long long int i=0; i<s.size(); i++) cout<<x;

	cout<<'\n';

	return 0;
}