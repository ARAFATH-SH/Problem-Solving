#include<bits/stdc++.h>
using namespace std;

void newArray(int a[], int b[], int n){
	for(int i=0; i<n; i++){
		cout<<b[i]<<' ';
	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<' ';
	}
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int b[n];
	for(int i=-0; i<n; i++){
		cin>>b[i];
	}
	
	newArray(a,b,n);

	return 0;
}