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

	int flag = 0;

	for(int i=0; i<35; i++){
		for(int j=0; j<n; j++){
			if(a[j]%2==0){
				a[j] = a[j]/2;
			}
			else{
				cout<<flag<<'\n';
				return 0;
			}
		}
		flag++;
	}

	cout<<flag<<'\n';


	return 0;
}