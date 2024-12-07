#include<bits/stdc++.h>
using namespace std;

int main(){
	int tt; cin>>tt;
	while(tt--){
		int n; cin>>n;
		string str; cin>>str;
		if(n==0){
			cout<<12<<str<<" AM\n";
		}
		else if(n<=11){
			if(n<10){
				cout<< 0 << n << str <<" AM\n";
			}
			else {
				cout<< n << str << " AM\n";
			}
		}
		else if(n==12){
			cout<< n << str << " PM\n";
		}
		else if(n>12){
			if(n-12<10){
				cout<< 0 << n-12 << str << " PM\n";
			}
			else{
				cout<< n-12 << str <<" PM\n";
			}
		}
	}
	return 0;
}