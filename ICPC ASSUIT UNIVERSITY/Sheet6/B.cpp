#include<bits/stdc++.h>
using namespace std;

 
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long  n; cin>>n;
	 	if(n==1) {
			cout<<"NO\n";
			return 0;
		}
		for(long long i=2; i*i<=n; i++){
			if(n%i==0){
				cout<<"NO\n";
				return 0;
			}
		}
		cout<<"YES\n";
	 
	return 0;
}