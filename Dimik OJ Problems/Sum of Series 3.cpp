#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long sum = 0;
		for(int i=n; i>=0; i--){
     	if(i==0){
     		cout<<1;
     	}
     	else if(i==1){
     		cout<<"2 + ";
     	}
     	else cout<<2<<"^"<<i<<" + ";
		}
		cout<<endl;
	}
	return 0;
}