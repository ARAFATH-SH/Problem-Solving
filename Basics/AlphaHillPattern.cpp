#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	for(int i=0; i<n; i++){
		int space = n-i-1;
		for(int j=1; j<=space; j++){
			cout<<' ';
		}
		char store = 'A';
		for(char s='A'; s<='A'+i; s++){
			cout<<s;
			store = s;
		}
		for(char s=store-1; s>='A'; s--){
			cout<<s;
		}
		cout<<'\n';
	}

	return 0;
}