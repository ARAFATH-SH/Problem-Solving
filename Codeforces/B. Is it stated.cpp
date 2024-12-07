#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans = 0;
		for(int i=0; i < s.size(); i++){
			if(s[i] == 'i' && s[i+1]=='t'){
				ans++;
			}
		}
		if(ans>0){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}