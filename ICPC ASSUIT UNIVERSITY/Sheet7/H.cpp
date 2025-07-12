#include<bits/stdc++.h>
using namespace std;

int n; 
void pyramid(int p){
	if(p==0) return;
	for(int i=1; i<=n-p; i++) cout<<' ';
	for(int i=1; i<=2*p-1; i++) cout<<'*';
	cout<<'\n';
	pyramid(p-1);
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	pyramid(n);
	return 0;
}