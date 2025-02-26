#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int n; cin>>n;
	string s; cin>>s;
	if(n==1){
		for(int i=0; i<s.size(); i++){
			for(int j=0; j<original.size(); j++){
				if(s[i]==original[j]){
					cout<<key[j];
					break;
				}
			}
		}
	}
	else{
		for(int i=0; i<s.size(); i++){
			for(int j=0; j<key.size(); j++){
				if(s[i]==key[j]){
					cout<<original[j];
					break;
				}
			}
		}
	}

	return 0;
}