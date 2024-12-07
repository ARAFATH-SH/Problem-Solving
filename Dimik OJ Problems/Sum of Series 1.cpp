#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int x,k;
		cin>>x>>k;
		int sum = 0;
		for(int i = 0; i<=k; i++){
			sum = sum + pow(x,i);
		}

		cout<<"Result = "<<sum<<endl;

	}
	return 0;
}
