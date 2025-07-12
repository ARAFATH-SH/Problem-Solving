#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k; cin>>n>>k;

	int a[n+1];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int sum=0;
	queue<int>q;
	for(int i=1; i<=k; i++){
		q.push(a[i]);
		sum+=a[i];
	}

	for(int i=k; i<=n; i++){
		cout<<sum<<'\n';
		sum-=q.front();
		q.pop();
		if(i+1<=n){
			q.push(a[i+1]);
			sum+=a[i+1];
		}
	}

	
	return 0;
}