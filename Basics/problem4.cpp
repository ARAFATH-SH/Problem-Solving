#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin>>s;

	stack<char>c;
	for(auto x:s){
		if(x=='('){
			c.push(x);
		}
		else{
			if(c.empty()){
				cout<<"Not Balanced\n";
				return 0;
			}
			else{
				c.pop();
			}
		}
	}
	if(c.empty()) cout<<"Balanced\n";
	else cout<<"Not Balanced\n";
	return 0;
}