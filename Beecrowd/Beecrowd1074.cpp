#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		if(n==0){
			cout<<"NULL\n";
		}
		else if(n%2==0){
			if(n>0){
				cout<<"EVEN POSITIVE\n";
			}
			else{
				cout<<"EVEN NEGATIVE\n";
			}
		}
		else {
			if(n>0){
				cout<<"ODD POSITIVE\n";
			}
			else{
				cout<<"ODD NEGATIVE\n";
			}
		}
	}
	return 0;
}