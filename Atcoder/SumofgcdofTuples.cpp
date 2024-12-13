#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k;
	cin>>k;

	long long sum = 0;

	for(int i=1; i<=k; i++){
		for(int j=1; j<=k; j++){
			for (int l=1; l<=k; l++)
			{
				sum+= __gcd(i,__gcd(j,l));
			}
		}
	}
	cout<<sum<<'\n';
	return 0;
}