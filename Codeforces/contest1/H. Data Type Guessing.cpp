#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k,a;
	cin>>n>>k>>a;
	long long product = n*k;
	long long x = product/a;
	if(product%a!=0){
		cout<<"double"<<endl;
	}
	else if(x<=2147483647){
		cout<<"int"<<endl;
	}
	else{
		cout<<"long long"<<endl;
	}
	return 0;
}