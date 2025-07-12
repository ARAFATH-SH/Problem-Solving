#include<bits/stdc++.h>
using namespace std;

struct Set{
	vector<int>v;

	int find_index(int x){
		auto it = find(v.begin(),v.end(),x);
		if(it == v.end()){
			return -1;
		}
		return it - v.begin() ;
	}

	void insert(int x){
		if(find_index(x)!=-1){
			return;
		}
		v.push_back(x);
		sort(v.begin(),v.end());
	}
	void erase(int x){
		if(find_index(x)==-1){
			return;
		}
		v.erase(find(v.begin(),v.end(),x));
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
	Set s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	cout<<s.find_index(10)<<'\n';
	cout<<s.find_index(20)<<'\n';
	cout<<s.find_index(30)<<'\n';
	cout<<s.find_index(40)<<'\n';
	s.erase(10);
	cout<<s.find_index(10);
	
	return 0;
}