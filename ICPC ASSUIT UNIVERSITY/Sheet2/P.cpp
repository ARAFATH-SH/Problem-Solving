#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	for(int i=n; i>0; i--){
		for(int j=0; j<i; j++){
			cout<<'*';
		}
		cout<<'\n';
	}
	
	return 0;
}