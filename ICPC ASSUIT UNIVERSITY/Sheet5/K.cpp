#include<bits/stdc++.h>
using namespace std;

void shiftRight(int a[], int x, int n){
	int shift = x%n;

	for(int i = n-shift; i<n; i++){
		cout<<a[i]<<' ';
	}
	for(int i=0; i<n-shift; i++){
		cout<<a[i]<<' ';
	}
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,x; cin>>n>>x;

	int a[n]; 
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	shiftRight(a,x,n);
	
	return 0;
}