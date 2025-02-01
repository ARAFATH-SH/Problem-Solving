#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,c,d; cin>>a>>b>>c>>d;

	a%=100;
	b%=100;
	c%=100;
	d%=100;

	if(((a*b*c*d)%100)<10){
		cout<<0;
	}

	cout<<((a*b*c*d)%100)<<'\n';

	return 0;
}