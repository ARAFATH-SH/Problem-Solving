#include<bits/stdc++.h>
using namespace std;



int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	for(int i=0; i<n; i++){
		for(char j = 'A'; j<='A'+i; j++){
			cout<<j<<' ';
		}
		cout<<'\n';
	}
	
	return 0;
}