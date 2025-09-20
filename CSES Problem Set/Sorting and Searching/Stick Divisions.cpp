#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x,n; cin>>x>>n;

	int a[n];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	priority_queue<int,vector<int>,greater<int>>q;
	for(int i=1; i<=n; i++){
		q.push(a[i]);
	}
	long long ans = 0;
	while(q.size()>1){
		int x = q.top();
		q.pop();
		int y = q.top();
		q.pop();
		ans+=x+y;
		q.push(x+y);
	}

	cout<<ans<<'\n';
	
	return 0;
}