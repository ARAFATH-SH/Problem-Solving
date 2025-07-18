#include<bits/stdc++.h>
using namespace std;

double eq(double x){
	return x * x + sqrt(x);
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double n; cin>>n;

	double l=0,r=1e5,ans=0;

	while(r-l > 1e-8){
		double mid = (l + r) / 2;
		if(double(eq(mid) <= n)){
			ans = mid;
			l = mid;
		}
		else r = mid;
	}

	cout<<fixed<<setprecision(10)<<ans<<'\n';
	
	return 0;
}