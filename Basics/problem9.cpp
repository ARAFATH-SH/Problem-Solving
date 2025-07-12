#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	getline(cin,s);
	stringstream ss(s);
	string word;
	map<string,int>mp;
	while(ss >> word){
		mp[word]++;
	}

	for(auto[word,key]:mp){
		cout<<word<<' '<<key<<'\n';
	}

	return 0;
}