#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	long long int maximum = 0;
	while(t--){
		long long int n; cin>>n;
		long long int cont = 0;
		if(n%2!=0){
			cont=0;
		}
		else{
			while(n>0){
				if(n%2!=0){
					break;
				}
				else{
					cont++;
					n=n/2;
				}
				maximum = max(cont,maximum);
			}
		}
	}
	cout<<maximum<<endl;
	return 0;
}