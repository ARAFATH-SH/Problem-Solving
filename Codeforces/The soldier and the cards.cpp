#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k1; cin>>n>>k1;

	vector<int>v1;
	for(int i=0; i<k1; i++){
		int x; cin>>x;
		v1.push_back(x);
	}
	int k2; cin>>k2;
	vector<int>v2;
	for(int i=0; i<k2; i++){
		int x; cin>>x;
		v2.push_back(x);
	}

	while(v1.empty()!=0 &&v2.empty()!=0){
		int x = v1.size()-1,y=v2.size()-1;
		if(v1[x]>v2[y]){
			v1.pop_back()
		}
	}

	
	return 0;
}