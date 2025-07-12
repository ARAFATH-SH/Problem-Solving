#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){

		long long n,x; cin>>n>>x;
		long long team = 0;
		vector<long long>tm;
		for(int i=0; i<n; i++){
			long long y; cin>>y;
			if(y>=x){
				team++;
			}
			else tm.push_back(y);
		}
		sort(tm.begin(),tm.end());

		long long Member = tm.size();
		for(int i=tm.size()-1; i>=0; i--){
			long long reminder = Member - i;
			if(tm[i]*reminder>=x){
				team++;
				Member = i;
			}
		}

		cout<<team<<'\n';
	}

	return 0;
}