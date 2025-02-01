#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b,c; cin>>a>>b>>c;

	int maximum = max(a,max(b,c));
	int minimum = min(a,min(b,c));
	int middle = (a+b+c) - maximum - minimum;

	cout<<minimum<<'\n'<<middle<<'\n'<<maximum<<'\n'<<'\n';
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
	
	return 0;
}