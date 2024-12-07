#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int fac = 1;
		double sum = 0;

		for(int i=1; i<=n; i++){
			fac = fac* i;
			double digit = (double)i / fac;
			sum = sum + digit;
		}
		cout<<fixed<<setprecision(4)<<sum<<endl;
	}
	return 0;
}