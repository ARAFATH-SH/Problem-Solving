#include<bits/stdc++.h>
using namespace std;

void printf_char(int n, char c){
	for(int i=1; i<=n; i++){
		cout<<c<<' ';
	}
	cout<<'\n';
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		char c; cin>>c;
		printf_char(n,c);
	}

	return 0;
}