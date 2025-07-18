#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
int n,k;
int a[N];

bool Operations(int x){
	long long op = 0;
	for(int i= (n+1)/2; i<=n; i++){
		if(a[i]<x) op+= x-a[i];
	}
	return op <= k;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>k;																																																
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);

	long long int l = 0, r = 2e9, ans = 0;

	while(l<=r){
		int mid = l + (r-l) / 2;
		if(Operations(mid)){
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	cout<<ans<<'\n';

	return 0;
}