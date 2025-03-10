#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n-1; i++){
		if(a[i]<a[i+1]){
			continue;
		}
		else{
			cout<<"No\n";
			return 0;
		}
	}

	cout<<"Yes\n";
	return 0;
}