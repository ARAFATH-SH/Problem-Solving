#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);

	for(int i=0; i<1e6; i++){
		if(s[i]=='\\'){
			return 0;
		}
		cout<<s[i];
	}
	return 0;
}