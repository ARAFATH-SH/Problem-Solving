#include<bits/stdc++.h>
using namespace std;


int binary_conversion(int x){
	int number_of_ones = 0;
	while(x){
		int last_digit = x%2;
		if(last_digit==1){
			number_of_ones++;
		}
		x/=2;
	}
	return number_of_ones;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;

	while(t--){
		int n; cin>>n;

		int decimal = 0;
		for(int i=1; i<=binary_conversion(n); i++){
			decimal = decimal * 2 + 1;
		}
		cout<<decimal<<'\n';
	}

	return 0;
}