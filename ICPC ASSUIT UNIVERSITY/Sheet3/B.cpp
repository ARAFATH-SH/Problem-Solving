#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int x; cin>>x;

	for(int i=0; i<n; i++){
		if(a[i]==x){
			cout<<i<<'\n';
			return 0;
		} 
	}
	cout<<-1<<'\n';
	return 0;
}