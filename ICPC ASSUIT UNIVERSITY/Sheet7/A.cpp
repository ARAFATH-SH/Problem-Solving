#include<bits/stdc++.h>
using namespace std;

void Printt(int n){
	if(n==0){
		return ;
	}

	Printt(n-1);
	cout<<"I love Recursion\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	Printt(n);
	
	return 0;
}