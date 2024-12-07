#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	int b[n+1];
	memset(b,-1, sizeof b);

	for(int i=1; i<=n; i++){
		for(int j=i-1; j>=1; j--){
			if(a[i]==a[j]){
				b[i]=j;
				break;
			}
		}
	}

	for (int i=1;i<=n; i++){
		cout<<b[i]<<' ';
	}

	return 0;
}