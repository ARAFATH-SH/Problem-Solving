#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; cin>>s;
	
	for(int i=0; i<s.size(); i++){
		if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T'){
			cout<<' ';
			i+=4;
		}
		else{
			cout<<s[i];
		}
	}
	
	return 0;
}