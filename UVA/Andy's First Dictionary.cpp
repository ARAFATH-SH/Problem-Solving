#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	set<string>ss;

	while(cin>>s){
		string word = "";
		int n = s.size();
		for(int i=0; i<s.size(); i++){
			if(isalpha(s[i])){
				word+=tolower(s[i]);
			}
			else{
				if(!word.empty()){
					ss.insert(word);
				}
				word="";
			}		
		}
		if(!word.empty()){
			ss.insert(word);
		}
	}

	for(auto se: ss){
		cout<<se<<'\n';
	}

	return 0;
}