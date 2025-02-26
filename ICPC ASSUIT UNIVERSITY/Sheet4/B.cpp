#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; 
	getline(cin,s);

	int n= s.size();
	for(int i=0; s[i]!='\\'; i++){
		cout<<s[i];
	}
	return 0;
}