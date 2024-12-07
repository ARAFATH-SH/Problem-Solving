#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int len = s.size();
	bool is_palindrome = true;
	for(int i=0; i<len; i++){
		int j = len - i - 1;
		if(s[i]!=s[j]){
			is_palindrome = false;
			break;
		}
	}
	if(is_palindrome){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
	return 0;
}