#include<bits/stdc++.h>
using namespace std;

long long int equation(int x, int y){
	long long int sum = 0;
	for(int i=0; i<=y; i+=2){
		sum+=pow(x,i);
	}
	return sum-1;
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x,y; cin>>x>>y;

	cout<<equation(x,y)<<'\n';
	
	return 0;
}