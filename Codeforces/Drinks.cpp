#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	double sum_of_drink=0;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		sum_of_drink+=a[i];
	}

	cout<<fixed<<setprecision(12)<<sum_of_drink/n<<'\n';
	
	return 0;
}