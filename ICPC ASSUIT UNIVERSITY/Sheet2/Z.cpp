#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int k,s; cin>>k>>s;
	int cont = 0;

	for(int x=0; x<=k; x++){
		for(int y=0; y<=k; y++){
			int z = s - x - y;
			if(z>=0 and z<=k){
				cont++;
			}
		}
	}
	cout<<cont<<'\n';
	return 0;
}