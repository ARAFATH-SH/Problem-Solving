#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int x[n],y[m];
		for(int i=0; i<n; i++){
			cin>>x[i];
		}
		for(int j=0; j<m; j++){
			cin>>y[j];
		}

		int cont = 0;

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if((x[i]+y[j])<=k){
					cont++;
				}
			}
		}
		
		cout<<cont<<endl;

	}
	return 0;
}