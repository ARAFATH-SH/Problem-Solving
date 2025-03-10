#include<bits/stdc++.h>
using namespace std;

void div(int n){
	int x=n;
	double sum=0;

	while(n--){
		double x;
		cin>>x;
		sum+=x;
	}
	
	sum/=x;

	cout<<fixed<<setprecision(6)<<sum<<'\n';
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	
	div(n);

	return 0;
}