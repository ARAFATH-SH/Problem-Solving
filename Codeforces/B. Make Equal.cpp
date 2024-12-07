#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		int sum = 0;
		for(int i = 0; i<n; i++){
			cin>>a[i];
			sum += a[i];
		}
		int k = sum / n;
		int p = 0;
		int cont = 0;
		for(int i=0; i<n; i++){
			a[i] = a[i]-k;
			p = p + a[i];
			if(p<0){
				cont++;
			}
		}
		if(cont==0){
			cout<<"yes\n";
		}
		else cout<<"no\n";
	}
	return 0;
}