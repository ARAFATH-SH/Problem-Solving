#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int s_len = s.size();

	for(int i=0; i<s_len; i++){
		if(s[i]==','){
			cout<<' ';
		}
		else if(isupper(s[i])){
			cout<<(char)tolower(s[i]);
		}
		else if(islower(s[i])){
			cout<<(char)toupper(s[i]);
		}
	}

	return 0;
}