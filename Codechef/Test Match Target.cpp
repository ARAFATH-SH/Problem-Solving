#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x,y,z;
	cin>>x>>y>>z;

	if((x+z)>=y){
		cout<<((x+z)-y)+1<<'\n';
	}

	else{
		cout<<0<<'\n';
	}

	return 0;
}