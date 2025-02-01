#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char c; cin>>c;

	if(c>='A' && c<='Z'){
		cout<< (char)(c+32)<<'\n';
	}
	else{
		cout<< (char)(c - 32)<<'\n';
	}

	return 0;
}