#include<bits/stdc++.h>
using namespace std;

int Cont;

int getVowel(string &s, int n){
	if(n<0) return 0;
	getVowel(s, n-1);
	if(s[n]=='a' || s[n]=='e' || s[n]=='i' || s[n]=='o' || s[n]=='u'
		|| s[n]=='A' || s[n]=='E' || s[n]=='I' || s[n]=='O' || s[n]=='U'){
		Cont++;
	}
	return Cont;
}

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	getline(cin,s);

	cout<<getVowel(s, s.size()-1);
	
	return 0;
}