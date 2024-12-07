#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		char s[1000];
		cin.getline(s,1000);
		int len = strlen(s);

		for(int i = 0; i<len; i++){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
				cout<<s[i];
			}
		}
		cout<<endl;
		for(int i = 0; i<len; i++){
			if(s[i]!=' ' && s[i] != 'a'&& s[i] != 'e'&& s[i] != 'i'&& s[i] != 'o'&& s[i] != 'u'){
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}