#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		for(int  i=1; i<=a; i++){
			for(int j =1; j<=i; j++){
				cout<<b;
				if(j<i){
					cout<<' ';
				}
			}
				cout<<endl;
		}
			for(int  i=a-1; i>=1; i--){
			for(int j =1; j<=i; j++){
				cout<<b;
				if(j<i){
					cout<<' ';
				}
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
