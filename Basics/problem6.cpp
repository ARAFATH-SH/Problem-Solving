#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k;
	cin>>n>>k;

	vector<int>v(n+1);

	for (int i=1; i<=n; ++i)
	{
		cin>>v[i];
	}

	priority_queue<int>pq;
	for(int i=1; i<=n; i++){
		pq.push(v[i]);
		if(i>k){
			pq.pop();
		}
		if(i>=k) cout<<pq.top()<<' ';
	}

	return 0;
}