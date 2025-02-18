#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int ve[n];
	for(int i=0; i<n; i++){
		cin>>ve[i];
	}

	vector<int>v;

	for(int i=0; i<n; i++){
		if(ve[i]>0){
			v.push_back(1);
		}
		else if(ve[i]<0){
			v.push_back(2);
		}
		else {
			v.push_back(ve[i]);
		}
	}

	for(int i=0; i<n; i++){
		cout<<v[i]<<' ';
	}
	cout<<'\n';

	return 0;
}