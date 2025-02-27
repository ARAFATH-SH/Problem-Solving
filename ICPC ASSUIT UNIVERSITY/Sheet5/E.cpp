#include<bits/stdc++.h>
using namespace std;

void value(int &x, int &y){
	
	x = x^y;
	y = x^y;
	x = x^y;

}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y;
	cin>>x>>y;

	value(x,y);
	cout<<x<<' '<<y<<'\n';
	return 0;
}