#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;

	int maxi = max(l1,l2); 
	int mini = min(r1,r2); 

	if(mini>=maxi){
		cout<<maxi<<' '<<mini<<'\n';
	}
	else{
		cout<<-1<<'\n';
	}
	
	return 0;
}