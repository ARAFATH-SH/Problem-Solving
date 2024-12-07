#include<bits/stdc++.h>
using namespace std;
long long binaryExponentiation(long long base, long long power, long long mod){
	int ans = 1;

	while(power){

		if(power&1){
		ans = (ans * base)%mod;
		power--;
		}

		else{
		base = (base * base)%mod;
		power/=2;
		}

	}
	return ans;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int base,power,mod = 10;
	cin>>power;
	cout<<binaryExponentiation(8,power,mod);
	return 0;
}