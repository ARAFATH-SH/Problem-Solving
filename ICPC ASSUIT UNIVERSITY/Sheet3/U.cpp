#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m; cin>>n>>m;

	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int b[m];
	for(int i=0; i<m; i++){
		cin>>b[i];
	}
	vector<int>store;
	int j=0,k=m;
	for(int i=0; i<n; i++){
		if(a[i]==b[j]){
			store.push_back(b[j]);
			j++;
		}
	}

	if((store.size())==m){
		cout<<"YES\n";
	}
	else cout<<"NO\n";

	return 0;
}