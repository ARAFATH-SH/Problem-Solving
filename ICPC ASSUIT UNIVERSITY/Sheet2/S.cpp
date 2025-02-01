#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;

	while(t--){
		int x,y; cin>>x>>y;

		int mini = min(x,y);
		int maxi = max(x,y);

		int odd_sum = 0;

		for(int i=mini+1; i<maxi; i++){
			if(i%2!=0){
				odd_sum+=i;
			}
		}
		cout<<odd_sum<<'\n';
	}

	return 0;
}