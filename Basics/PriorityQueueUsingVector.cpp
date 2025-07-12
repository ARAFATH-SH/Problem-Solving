#include<bits/stdc++.h>
using namespace std;

struct PriorityQueue{
	vector<int>v;

	void push(int x){
		v.push_back(x);
		sort(v.begin(),v.end(),greater<int>());
	}
	void pop(){
		if(v.empty()){
			cout<<"Queue is empty\n";
			return;
		}
		v.erase(v.begin());
	}
	int top(){
		if(v.empty()){
			cout<<"Queue is empty\n";
			return 0;
		}
		return v[0];
	}
	int size(){
		return v.size();
	}
	bool empty(){
		return v.empty();
	}

};

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	PriorityQueue pq;
	pq.push(10);
	pq.push(20);
	pq.push(30);

	cout<<pq.top()<<'\n';
	pq.pop();
	cout<<pq.top()<<'\n';
	pq.pop();
	cout<<pq.top()<<'\n';
	pq.pop();
	cout<<pq.top()<<'\n';
	pq.pop();
	return 0;
}