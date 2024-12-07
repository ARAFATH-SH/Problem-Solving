#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1 || n==3){
			cout<<-1<<'\n';
		}
		else if(n&1){
			cout<<string(n-5,'3')+"36366"<<'\n';
		}
		else{
			cout<<string(n-2,'3')+"66"<<'\n';
		}
	}
	return 0;
}