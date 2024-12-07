#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	a = a%10;
	b = b%10;
	c = c%10;
	int square = a*a + b*b;
	if(square<(c*c)){
		cout<<"YES\n";
	} 
	else cout<<"NO\n";
	return 0;

}