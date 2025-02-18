#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,mini=INT_MAX,maxi=INT_MIN; cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int j=0,k=0;
	for(int i=0; i<n; i++){
		if(mini>a[i]){
			mini = a[i];
			j = i;
		}
		if(maxi<a[i]){
			maxi = a[i];
			k=i;
		}
	}

	swap(a[j],a[k]);

	for(int i=0; i<n; i++){
		cout<<a[i]<<' ';
	}
	cout<<'\n';

	return 0;
}