#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(n==k){
			for(int i=1; i<=n; i++){
				cout<<"1 ";
			}
		}
		else{
			if(k>=2){
				cout<<-1;
			}
			else{
				for(int i=1; i<=n; i++){
					cout<<i<<' ';
				}
			}
		}
		cout<<endl;
	}
	return 0;
}