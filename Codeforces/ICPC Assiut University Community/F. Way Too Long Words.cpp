#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		int s_len = s.size();

		if(s_len<=10){
			cout<<s<<endl;
		}
		else{
			cout<<s[0]<<s_len-2<<s[s_len-1]<<endl;
		}
	}
	return 0;
}