#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b;
	char c;
	cin>>a>>c>>b;

	switch(c){
		case'>':
			if(a>b) cout<<"Right\n";
			else cout<<"Wrong\n";
			break;
		case '<':
			if(a<b) cout<<"Right\n";
			else cout<<"Wrong\n";
			break;
		case '=':
			if(a==b) cout<<"Right\n";
			else cout<<"Wrong\n";
			break;
	}

	return 0;
}