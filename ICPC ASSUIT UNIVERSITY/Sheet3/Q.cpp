#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int flag = 0;
		for(int i=0; i<n; i++){
			flag++;
			for(int j=i+1; j<n; j++){
				if(a[j]>=a[j-1]){
					flag++;
				}
				else{
					break;
				}
			}
		}
		
		cout<<flag<<'\n';
	}
	
	return 0;
}