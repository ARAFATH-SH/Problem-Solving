#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}

		for(int i = 0; i<n; i++){
			for(int j=i; j<n; j++){
			int maximum = -1e9;
				for(int k=i; k<=j; k++){
				maximum=max(maximum,a[k]);
				}
				cout<<maximum<<' ';
			}
		}
			cout<<endl;
	}
	return 0;
}