#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;

int a[N],b[N],n;
long long k;

int k_cont(int x){
	int l=1,r=n,ans=0;
	while(l<=r){
		int mid = l + (r-l)/2;
		if(b[mid]<=x){
			ans = mid;
			l = mid+1;
		}
		else r = mid-1;
	}
	return ans;
}

bool f(int x){
	long long cnt = 0;
	for(int i=1; i<=n; i++){
		int lim = x - a[i];
		cnt += k_cont(lim); 
	}
	return cnt >= k;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>k;
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=n; i++){
		cin>>b[i];
	}

	sort(a+1, a+n+1);
	sort(b+1, b+n+1);

	int l=1,r=2e9,ans=0;

	while(l<=r){
		int mid = l+(r-l)/2;
		if(f(mid)){
			ans = mid;
			r=mid-1;
		}
		else l = mid+1;
	}
	cout<<ans<<'\n';
	return 0;
}