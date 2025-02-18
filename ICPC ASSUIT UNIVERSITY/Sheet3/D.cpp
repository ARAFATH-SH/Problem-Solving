#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int ve[n];
	for(int i=1; i<=n; i++){
		cin>>ve[i];
	}
	for(int i=1; i<=n; i++){
		if(ve[i]<=10){
			cout<<"A"<<"["<<i-1<<"] = "<<ve[i]<<'\n';
		}
	}

	return 0;
}