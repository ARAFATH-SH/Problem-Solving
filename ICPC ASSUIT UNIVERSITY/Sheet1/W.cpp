#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b,c; 
	char s1,s2;
	cin>>a>>s1>>b>>s2>>c;

	switch(s1){
		case '+':
			if(a+b==c) cout<<"Yes\n";
			else cout<<a+b<<'\n';
			break;
		case '-':
			if(a-b==c) cout<<"Yes\n";
			else cout<<a-b<<'\n';
			break;	
		case '*':
			if(a*b==c) cout<<"Yes\n";
			else cout<<a*b<<'\n';
			break;	
	}
	
	return 0;
}