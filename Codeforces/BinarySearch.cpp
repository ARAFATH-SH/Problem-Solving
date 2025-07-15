#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int a[N], x;

bool binarySearch(int l, int r){
	if(l>r) return false;

	int mid = (l + r)/2;
	if(a[mid] == x) return true;
	else if(a[mid]>x) return binarySearch(l , mid-1);
	else return binarySearch(mid+1 , r);
}

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,q; cin>>n>>q;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	while(q--){
		cin>>x;
		if(binarySearch(1,n)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	
	return 0;
}