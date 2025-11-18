#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int sp = 2*(n-1);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<j;
		}

		for(int j=1; j<=sp; j++){
			cout<<' ';
		}

		for(int j=i; j>=1; j--){
			cout<<j;
		}
		cout<<'\n';
		sp-=2;
	}

	return 0;
}