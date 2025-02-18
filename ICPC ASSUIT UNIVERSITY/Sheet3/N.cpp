#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b; cin>>a>>b;

	string v; cin>>v;

	for(int i=0; i<v.size(); i++){
		cin>>v[i];
	}
	bool is_true = false;

	if(v[a]=='-' && (v[v.size()])=='\0'){
		is_true = true;
		}
	else{
		cout<<"No\n";
		return 0;
	}
	
	for (int i=0; i<a; i++)
	{
		if(isdigit(v[i])){
			is_true = true;
		}
		else{
			cout<<"No\n";
			return 0;
		}	
	}
	for (int i=a+1; i<v.size(); i++)
	{
		if(isdigit(v[i])){
			is_true = true;
		}
		else{
			cout<<"No\n";
			return 0;
		}	
	}

	if(is_true) cout<<"Yes\n";

	return 0;
}