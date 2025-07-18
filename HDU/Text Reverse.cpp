#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	cin.ignore();

	while(n--){
	string s;	
	getline(cin,s);
	int n = s.size();
	string word="";
	for(int i=0; i<n; i++){
		if(s[i]==' '){
			reverse(word.begin(),word.end());
			cout<<word;
			word = "";
			cout<<' ';
		}
		else{
			word += s[i];
		}
	}

	reverse(word.begin(),word.end());

	cout<<word;
	cout<<'\n';
	
	}
	
	return 0;
}