#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n; cin>>m>>n;
	int a[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	int x; cin>>x;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]==x){
				cout<<"will not take number\n";
				return 0;
			}
		}
	}
	cout<<"will take number\n";
	return 0;
}