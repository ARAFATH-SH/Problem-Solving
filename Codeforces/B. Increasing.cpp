#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);

		bool is_increasing = false;
		int maximum = 0;

		for(int i=0; i<n; i++){

			if(a[i]==maximum){
				is_increasing = false;
				break;
			}

			if(a[i]>maximum){
				maximum = a[i];
				is_increasing = true;
			}
		}

		if(is_increasing){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}

	}
	return 0;
}