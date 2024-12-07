#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		char s[1010];
		cin>>s;
		int len = strlen(s);
		int count[26];
		for(char c = 'a'; c<='z'; c++){
			int cnt = 0;
			for(int i = 0; i<len; i++){
				if(s[i]==c){
					cnt++;
				}
			}
			count[c-'a'] = cnt;
		}
		bool is_printed [26];
		for(int i=0; i<26; i++){
			is_printed[i] = false;
		}
		for(int i=0; i<len; i++){
			if(!is_printed[s[i]-'a']){
			cout<<s[i]<<" = "<<count[s[i] - 'a']<<endl;
			}
			is_printed[s[i]-'a'] = true;
		}
		if(t>0) cout<<endl;
	}
	return 0;
}