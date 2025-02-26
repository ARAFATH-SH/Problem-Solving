#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; cin>>s;
	string st = "hello";
	int i=0,j=0;
	while(s[i]!='\0' && s[j]!='\0'){

		if(s[i]==st[j]){
			j++;
		}

		i++;

	}

	if(j==5) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}