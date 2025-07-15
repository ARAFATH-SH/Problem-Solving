#include<bits/stdc++.h>
using namespace std;

int a[105],x;

bool Search(int l,int r){

	if(l>r) return false;
	cout<<l <<' '<<r<<'\n';
	int mid = (l + r) / 2;

	if(a[mid] == x) return true;
	else if(a[mid] > x) return Search(l , mid-1);
	else return Search(mid+1 , r); 
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	x = 5;

	cout<<boolalpha<<Search(1,n)<<'\n';
	
	return 0;
}