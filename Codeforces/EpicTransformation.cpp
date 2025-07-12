#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		map<int,int>frequency;

		for(int i=0; i<n; i++){
			frequency[v[i]]++;
		}

		priority_queue<int>pq;
		for(auto [key,value]: frequency){
			pq.push(value);
		}

		int alive = n;

		while(pq.size() > 1){
			int x = pq.top();
			pq.pop();
			int y = pq.top();
			pq.pop();
			x--; y--;
			alive-=2;
			if(x>0)pq.push(x);
			if(y>0)pq.push(y);
		}
		cout<<alive<<'\n';
	}
	
	return 0;
}