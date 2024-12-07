#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	for(int i = 0; i<s.size(); i++){
		if(s[i]=='a' or s[i]=='A' or s[i]=='e' or s[i]=='E' or s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='u' or s[i]=='U' or s[i]=='y' or s[i]=='Y'){
			continue;
		}
		else{
			if(isupper(s[i])){
				s[i]= tolower(s[i]);
			}
			cout<<"."<<s[i];
		}
	}
	return 0;
}