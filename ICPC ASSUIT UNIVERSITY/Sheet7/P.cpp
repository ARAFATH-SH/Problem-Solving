#include<bits/stdc++.h>
using namespace std;

int cont;

void logg(long long int n){
	if(n==1) return;
	cont++;
	logg(n/2);
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int n; cin>>n;
	logg(n);
	cout<<cont<<'\n';
	return 0;
}