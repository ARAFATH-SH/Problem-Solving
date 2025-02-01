#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while(1){
		int m,n; cin>>m>>n;

		int maxi = max(m,n);
		int mini = min(m,n);

		if(m<=0 || n<=0){
			return 0;
		}
		int sum = 0;
		for(int i = mini; i<=maxi; i++){
			cout<<i<<' ';
			sum+=i;
		}
		cout<<"sum ="<<sum<<'\n';

	}
	
	return 0;
}