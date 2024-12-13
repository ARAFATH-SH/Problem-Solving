#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int digits = 0;
	while(n){
		int last_digits = n%k;
		digits++;
		int drop_last_digit = n/k;
		n = drop_last_digit;
	}

	cout<<digits<<'\n';

	return 0;
}