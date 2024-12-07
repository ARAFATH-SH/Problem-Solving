#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		char s[55];
		cin>>s;
		int len = strlen(s);

		for(int i = 0; i<len; i++){
			if(s[i]=='L'){
				cout<<s[i-1];
			}
			else if(s[i]=='R'){
				cout<<s[i+1];
			}
			else cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}