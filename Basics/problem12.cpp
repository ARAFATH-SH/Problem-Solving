#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
bitset<N>bs[N];

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k; cin>>n>>k;

	for(int i=0; i<n; i++){
		string s; cin>>s;
		bs[i] = bitset<N>(s);
	}

	int ans = 0;

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if((bs[i]^bs[ j]).count()<=k){
				ans++;
			}
		}
	}
	cout<<ans<<'\n';

	return 0;
}