#include<bits/stdc++.h>
using namespace std;

struct Stack{
	vector<int> v;

	void push(int x){
		v.push_back(x);
	}
	void pop(){
		if(v.empty()){
			cout<<"Stack is empty\n";
			return;
		}
		v.pop_back();
	}

	int top(){
		if(v.empty()){
			cout<<"Stack is empty\n";
			return 0;
		}
		return v.back();
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
	
	Stack s;

	s.push(10);	
	s.pop();
	s.pop();
	s.push(20);
	s.push(30);
	cout<<s.top()<<'\n';
	cout<<s.size()<<'\n';
	cout<<s.empty()<<'\n';
	s.pop();
	cout<<s.top();


	return 0;
}