#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	int maximum = max(x,max(y,z));
	int minimum = min(x,min(y,z));
	int middle = x + y + z - maximum - minimum;
	cout<<minimum<<endl;
	cout<<middle<<endl;
	cout<<maximum<<endl;
	cout<<endl;
	cout<<x<<endl<<y<<endl<<z<<endl;
	return 0;
}