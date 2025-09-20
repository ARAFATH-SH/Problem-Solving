#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;

		vector<int>v(n),a;
		for(int i=0; i<n; i++){
			cin>>v[i];
			a.push_back(v[i]%10);
		}
		vector<int>store;
		store.push_back(a[0]);
		cout<<store[0]<<' ';
		for(int i=1; i<n; i++){
			sort(store.begin(),store.end());
			store.push_back(a[i]);
			
			cout<<store[store.size()/2]<<' ';

		}
		
		
	}
	return 0;
}