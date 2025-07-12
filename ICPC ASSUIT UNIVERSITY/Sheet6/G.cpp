#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n; cin>>n;
	long long sum = 0;
	
	for (int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0){
			sum+=i;
			if(i!=sqrt(n)){
				sum+=n/i;
			}
		}
	}
	cout<<sum<<'\n';
	return 0;
}