#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	string s;;
	cin>>s;
	int sum = 0;
	
	for(int i=0; i<s.size(); i++){
		sum+=s[i]-'0';
	}

	cout<<sum<<'\n';
	
	return 0;
}