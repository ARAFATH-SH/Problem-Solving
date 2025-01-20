#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		int a[5];
		cin>>a[1]>>a[2]>>a[4]>>a[5];
		int arr[] = {a[1]+a[2], a[4]-a[2], a[5]-a[4]};
		sort(arr, arr+3);
		if(arr[0] == arr[2]){
			cout<<3<<'\n';
		}
		else if(arr[0]==arr[1] || arr[1]==arr[2]){
			cout<<2<<'\n';
		}
		else cout<<1<<'\n';
	}

	return 0;
}