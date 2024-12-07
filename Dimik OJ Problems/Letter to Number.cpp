#include<bits/stdc++.h>
using namespace std;

int find_digit(char c){
	return c - 'A' + 1;
}

int main(){
	int t; cin>>t;
	while(t--){
	char s[120];
	cin>>s;
	int len = strlen(s);

	for(int i=0; i<len; i++){
		cout<<find_digit(s[i]);
	}
	cout<<endl;
	}

	return 0;
}