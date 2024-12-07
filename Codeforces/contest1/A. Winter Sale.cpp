#include<bits/stdc++.h>
using namespace std;

int main(){
	double x,y;
	cin>>x>>y;
	double z = y/(1-x/100);
	cout<<fixed<<setprecision(2)<<z<<endl;
	return 0;
}