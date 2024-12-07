#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int cont = 0,flag = 0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]==0){
				flag++;
			}
			if(a[i]<0){
				cont++;
			}
		}
		
		if(cont%2==0 || flag!=0){
			cout<<0<<'\n';
		}
		else cout<<(cont%2)<<'\n';
	}
	return 0;
}