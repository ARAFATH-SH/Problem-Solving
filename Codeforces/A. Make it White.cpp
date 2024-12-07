#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		char s[n];
		cin>>s;
		int count = 0;
		for(int i=0; i<n; i++){
			if(s[i]=='@'){
				count++;
				}
			if(s[i+1] =='*' && s[i+2]=='*'){
				break;
				}
		}
		cout<<count<<endl;
	}
	return 0;
}
