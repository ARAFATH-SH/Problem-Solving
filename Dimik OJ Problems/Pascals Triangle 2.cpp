#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long int a[n+1][n+1];

		for(int i=0; i<=n; i++){
			for(int j=0; j<=n; j++){
				a[i][j]=0;
			}
		}
		for(int i=0; i<=n; i++){
			for(int j=0; j<=i; j++){
				if(j==0){
					a[i][j]=1;
				}
				/*else if(i==0){
					a[i][j]=0;
				}*/
				else {
					a[i][j] = a[i-1][j] + a[i-1] [j-1]; 
				}
			}
		}
		for(int i=0; i<=n; i++){
			for(int j=0;  j<=i; j++){
				cout<<a[i][j]<<' ';
			}
			cout<<'\n';
		}
		cout<<'\n';
	}
	return 0;
}