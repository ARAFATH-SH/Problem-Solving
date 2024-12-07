#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;

	while(t--){
		char c;
		cin>>c;
		if(isupper(c)){
			cout<<"Uppercase Character"<<endl;
		}
		else if(islower(c)){
			cout<<"Lowercase Character\n";
		}
		else if(isdigit(c)){
			cout<<"Numerical Digit\n";
		}
		else cout<<"Special Characters\n";
	}
	return 0;
}