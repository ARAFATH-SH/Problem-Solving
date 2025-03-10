#include<bits/stdc++.h>
using namespace std;

void shiftZeros(int a[], int n){
	int cont=0;
	for(int i=0; i<n; i++){
		if(a[i]!=0){
			cout<<a[i]<<' ';
		}
		else cont++;
	}

	for(int i=n-cont; i<n; i++){
		cout<<0<<' ';
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

	shiftZeros(a,n);

	return 0;
}