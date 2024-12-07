#include<bits\stdc++.h>
using namespace std;

int main(){
	int a,b,t;
	cin>>a>>b>>t;

if(a<t){
	int sum = 0;
	for(int i = a; i<=t; i+=a){
		sum+=b;
	}
	cout<<sum<<endl;
}
else cout<<0<<endl;
return 0;
}