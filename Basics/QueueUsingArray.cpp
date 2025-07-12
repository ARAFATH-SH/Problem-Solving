#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 9;

struct Queue{
	int a[N];
	int start = 1,end = 0;

	void push(int x){
		end++;
		a[end]=x;
	}
	void pop(){
		if(start>end){
			cout<<"Queue is empty\n";
			return;
		}
		start++;
	}
	int front(){
		if(start>end){
			cout<<"Queue is empty\n";
			return 0;
		}
		return a[start];
	}
	int back(){
		if(start>end){
			cout<<"Queue is empty\n";
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
	
	Queue q;
	q.push(10);
	q.push(20);
	q.push(30);

	cout<<q.front()<<'\n';
	cout<<q.back()<<'\n';

	q.pop();

	cout<<q.front()<<'\n';
	cout<<q.back()<<'\n';
	cout<<q.size()<<'\n';
	cout<<q.empty()<<'\n';

	q.pop();
	q.pop();

	cout<<q.front()<<'\n';
	cout<<q.back()<<'\n';
	cout<<q.size()<<'\n';
	cout<<q.empty()<<'\n';

	return 0;
}