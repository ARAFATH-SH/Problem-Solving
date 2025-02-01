#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char c; cin>>c;

	if(isdigit(c)){
		cout<<"IS DIGIT\n";
	}
	else{
		if(isalpha(c)){
			if(isupper(c)){
				cout<<"ALPHA\nIS CAPITAL\n";
			}
			else{
				cout<<"ALPHA\nIS SMALL\n";
			}
		}
	}
	
	return 0;
}