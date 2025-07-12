#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m,n;
	cin>>m>>n;

	map<string,int>mp;

	for(int i=0; i<m; i++){
		string s; int salary;
		cin>>s>>salary;
		mp[s] = salary; 
	}

	while(n--){
		string word;
		long long salary = 0;
		while(cin>>word){
			if(word==".") break;
			if(mp.find(word) != mp.end()){
				salary+=mp[word];
			}
		}
		cout<<salary<<'\n';
	}

	return 0;
}