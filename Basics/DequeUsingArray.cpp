#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;

struct Deque{
	int a[2*N];
	int start = N, end = N-1;

	void push_front(int x){
		a[--start] = x;
	}
	void push_back(int x){
		a[++end] = x;
	}
	void pop_front(){
		if(start>end){
			cout<<"Deque is empty\n";
			return;
		}
		start++;
	}
	void pop_back(){
		if(start>end){
			cout<<"Deque is empty\n";
			return;
		}
		end--;
	}
	
	int front(){
		if(start>end){
			cout<<"Deque is empty\n";
			return 0;
		}
		return a[start];
	}
	int back(){
		if(start>end){
			cout<<"Deque is empty\n";
			return 0;
		}
		return a[end];
	}	
	int size(){
		return end - start + 1;
	}
	bool empty(){
		return start>end;
	}

};

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	Deque dq;
	dq.push_front(10);
	dq.push_front(20);
	dq.push_back(30);
	dq.push_back(40);
	cout<<dq.front()<<'\n';
	cout<<dq.back()<<'\n';
	dq.pop_front();
	cout<<dq.front()<<'\n';
	cout<<dq.back()<<'\n';
	dq.pop_back();
	cout<<dq.front()<<'\n';
	cout<<dq.back()<<'\n';
	dq.pop_front();
	cout<<dq.front()<<'\n';
	cout<<dq.back()<<'\n';
	dq.pop_back();
	cout<<dq.front()<<'\n';
	cout<<dq.back()<<'\n';

	return 0;
}