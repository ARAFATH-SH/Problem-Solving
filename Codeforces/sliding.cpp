#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	long long n,m,r,c;
	cin>>n>>m>>r>>c;

	long long not_changing_row= (n*m) - ((r-1)*m+c);
	long long changing_row = 1ll*(n-r)*m;

	cout<<changing_row+not_changing_row-(n-r)<<'\n';
	// long long cont = 0;
	// for(int i=r; i<=n; i++){
	// 	for(int j=c; j<=m; j++){
	// 		if(i<n && j==m){
	// 			cont= 1LL* cont+j;
	// 		}
	// 		cont = 1LL*cont+1;
	// 	}
	// }
	// cout<<cont-1<<endl;
	}                    
	return 0;
}