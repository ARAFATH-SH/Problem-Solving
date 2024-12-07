#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	if((x==0 && y==0) || abs(x-y)>=2){
		cout<<"NO\n";
	}
	else cout<<"YES\n";
		return 0;
}