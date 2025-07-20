#include<bits/stdc++.h>
using namespace std;

const int Max = 1e6;
int cnt[Max+1];

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	int a[n];

	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	for(int i=1; i<=n; i++){
		cnt[a[i]]++;
	}

	for(int i=1; i<=Max; i++){
		for(int j=1; j<=cnt[i]; j++){
			cout<<i<<' ';
		}
	}
	
	return 0;
}

//Time complexity : O(n + Max)
//Space complexity : O(Max)