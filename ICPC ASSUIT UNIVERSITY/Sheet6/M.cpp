#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string x; cin>>x;
	int n; cin>>n;

	long long int number = 0;
	
	for(int i=0; i<x.size(); i++){
		number = number * 10 + x[i] - '0';
		number%=n;
	}

	if(number==0) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}
