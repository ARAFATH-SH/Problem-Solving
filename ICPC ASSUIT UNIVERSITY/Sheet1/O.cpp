#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b; char s;
	cin>>a>>s>>b;

	switch(s){
		case '+':
			cout<<a+b<<'\n';
			break;
		case '*':
			cout<<a*b<<'\n';
			break;
		case '-':
			cout<<a-b<<'\n';
			break;
		case '/':
			cout<<a/b<<'\n';
			break;
	}
	
	return 0;
}