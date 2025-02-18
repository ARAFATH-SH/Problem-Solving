#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int a[n];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	int index = 0, mini = INT_MAX;

	for(int i=1; i<=n; i++){
		if(mini>a[i]){
			index=i;
			mini=a[i];
		}
	}

	cout<<mini<<' '<<index<<'\n';
	
	return 0;
}