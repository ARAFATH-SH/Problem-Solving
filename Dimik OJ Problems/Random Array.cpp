#include<bits/stdc++.h>
using namespace std;



int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		bool is_ascending = true;
	 for(int i=1; i<n; i++){
	 	if(a[i]<a[i-1]){
	 		is_ascending = false;
	 	}
	 }

	 bool is_descending = true;
	 for(int i=0; i<n; i++){
	 	if(a[i]>a[i-1]){
	 		is_descending = false;
	 	}
	 }
	 if(is_ascending or is_descending){
	 	cout<<"YES\n";
	 }
	 else cout<<"NO\n";
	}
	return 0;
}