#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n; cin>>n;
	long long sum = 0;
	for(long long i=1; ; i++){
		if(sum>n){
			cout<<i-2<<'\n';
			return 0;
		}
		else if(sum==n){
			cout<<i-1<<'\n';
			return 0;
		}
		else sum+=i;
	}

	return 0;
}