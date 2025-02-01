#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x; cin>>x;

	x/=1000;

	if(x&1){
		cout<<"ODD\n";
	}
	else{
		cout<<"EVEN\n";
	}

	return 0;
}