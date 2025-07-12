#include<bits/stdc++.h>
using namespace std;

int cont;

void sequence(long long n){
	cont++;
	if(n==1) return;
	if(n%2==0) sequence(n/2);
	else sequence(3*n+1);
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n; cin>>n;
	sequence(n);

	cout<<cont;
	
	return 0;
}