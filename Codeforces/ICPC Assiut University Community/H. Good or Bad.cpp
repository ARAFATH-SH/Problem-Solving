#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
 
		bool is_found = false;
 
		for(int i=0; i<s.size(); i++){
			if(i+2<s.size() and s[i]=='1' and s[i+1]=='0' and s[i+2]=='1'){
				is_found = true;
				break;
			}
			if(i+2<s.size() and s[i]=='0' and s[i+1]=='1' and s[i+2]=='0'){
				is_found = true;
				break;
			}
		}
		if(is_found){
			cout<<"Good\n";
		}
		else{
			cout<<"Bad\n";
		}
	}
	return 0;
}