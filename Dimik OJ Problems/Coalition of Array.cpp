#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n1;
		cin>>n1;
		int a[n1];
		for(int i=0; i<n1; i++){
			cin>>a[i];
		}
		int n2;
		cin>>n2;
		int b[n2];
		for(int i=0; i<n2; i++){
			cin>>b[i];
		}

		int n = n1 + n2;
		int c[n];

		for(int i=0; i<n1; i++){
			c[i] = a[i];
		}
		for(int i=0; i<n2; i++){
			c[n1 + i] = b[i];
		}

		sort(c, c+n);

		for(int i=0; i<n; i++){
			cout<<c[i]<<' ';
		}
		cout<<endl;

	}
	return 0;
}