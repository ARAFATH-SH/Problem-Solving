#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		bool is_present [n+1];
		for(int i=1; i<=n; i++){
			is_present[i] = false;
		}
		for(int i = 1; i<n; i++){
			int x; cin>>x;
			is_present[x] = true;
		}
		int not_present;
		for(int i=1; i<=n; i++){
			if(!is_present[i]){
				not_present = i;
			}
		}
		cout<<not_present<<endl;
	}
	return 0;
}