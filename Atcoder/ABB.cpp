#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;
	string s; cin>>s;
	if(n==1) {
		cout<<s<<'\n';
		return 0;
	}

	vector<char>v,w;
	for(int i=0; i<n; i++){
		if(s[i]=='A'){
			v.push_back('B');
			v.push_back('B');
		}
		else{
			v.push_back(s[i]);
		}
	}

	for(int i=0; i<v.size(); i++){
		if(v[i]=='B'&&v[i+1]=='B'){
			w.push_back('A');
			i++;
		}
		else{
			w.push_back(v[i]);
		}
	}

	for(auto c:w){
		cout<<c;
	}

	return 0;
}
