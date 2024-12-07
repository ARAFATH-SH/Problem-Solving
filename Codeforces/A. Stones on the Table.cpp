#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	string s;
	cin>>s;
	int s_len = s.size();

	int count = 0;

	for(int i=0; i<=s_len-1; i++){
		if(s[i]==s[i+1]){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}