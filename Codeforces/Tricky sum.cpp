#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;

	while(t--){
		long long int n; cin>>n;
		long long int total_sum = n * (n+1) / 2;
		long long int power_of_two = 0;
		for(int i=1; i<=n; i*=2){
			power_of_two += i;
			}

		cout<<total_sum - 2* power_of_two<<endl;
	}

return 0;
}
