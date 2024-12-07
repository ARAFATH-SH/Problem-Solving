#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b; cin>>a>>b;
	string s;
	cin>>s;
	if(s[a]!='-'){
		cout<<"No\n";
		return 0;
	}
	else {
		for(int i = 0; i<s.size(); i++){
			if(s[i]>='0' && s[i]<='9');
			else if(i==a){
				continue;
			}
			else{
				cout<<"No\n";
				return 0;
			}
		}
		cout<<"Yes\n";
	}
	return 0;
}