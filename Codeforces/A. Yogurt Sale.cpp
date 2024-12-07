#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		int real_price = a+a;
		int price = 0;
		if(real_price>b){
			if(n%2==1){
				n=n/2;
				price = n*b + a;
			}
			else{
				n = n/2;
				price = n*b;
			}
		}
		else{
			price = n*a;
		}
		cout<<price<<endl;
	}
	return 0;
}