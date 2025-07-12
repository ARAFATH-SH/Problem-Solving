#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long a,b,x; cin>>a>>b>>x;

	long long maxi = max(a,b);
	long long mini = min(a,b);

	maxi/=x;
	mini=(mini-1)/x;

	cout<<(maxi*(maxi+1)/2)*x - (mini*(mini+1)/2)*x<<'\n';
	
	return 0;
}