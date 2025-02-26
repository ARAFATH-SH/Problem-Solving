#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	bool isMultiComment = false;

	while(getline(cin,s)){
		bool isNotSingleComment = false;
		if(s.size()==0 || s==" ") continue;

		for(int i=0; i<s.size(); i++){
			if(s[i]=='/' and s[i+1]=='/' and !isMultiComment){
				break;
			}
			else if(s[i]=='/' and s[i+1]=='*'){
				i++;
				isMultiComment = true;
			}
			else if(s[i]=='*' and s[i+1]=='/' and isMultiComment){
				i++;
				isMultiComment = false;
			}
			else if(!isMultiComment){
				cout<<s[i];
				isNotSingleComment = true;
			}
		}
		if(isNotSingleComment and !isMultiComment){
			cout<<'\n';
		}

	}


	return 0;
}