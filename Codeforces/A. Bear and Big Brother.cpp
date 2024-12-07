#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if(a==b){
		cout<<1;
		return 0;
	}
	int count = 0;
	for(int i = a; i<=b; i*=3){
		count++;
		b=b*2;
	}
	cout<<count<<endl;
	return 0;
}