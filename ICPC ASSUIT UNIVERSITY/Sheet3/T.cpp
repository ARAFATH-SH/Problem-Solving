#include<bits/stdc++.h>
using namespace std;
 
int32_t main(){
	
	int n; cin>>n;
 
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
 
	int first_diagonal = 0, second_diagonal = 0;
	int k = n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				first_diagonal += a[i][j];
			}
		}
		second_diagonal += a[i][k-1];
		k--;
	}
 
	cout<<abs(first_diagonal - second_diagonal)<<'\n';
 
	return 0;
}