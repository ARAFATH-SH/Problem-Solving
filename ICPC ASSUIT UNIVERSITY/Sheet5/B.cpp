#include<bits/stdc++.h>
using namespace std;

void printt(int n){
	for(int i=1; i<n; i++){
		cout<<i<<' ';
	}
	cout<<n<<'\n';
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	printt(n);

	return 0;
}