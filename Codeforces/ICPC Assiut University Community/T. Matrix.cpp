#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n; cin>>n;
	long long int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	long long int sum1 = 0;
	long long int sum2 = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				sum1+=a[i][j];
			}
			if(i== n - 1 -j){
				sum2+=a[i][j];
			}
		}
	}
	cout<<abs(sum1-sum2)<<endl;
	return 0;
}