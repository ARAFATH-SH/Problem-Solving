#include<bits/stdc++.h>
using namespace std;

//ceil = (a+b-1)/b;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b; cin>>a>>b;

	cout<<"floor "<<a<<" / "<<b<<" = "<<(a/b)<<'\n';
	cout<<"ceil "<<a<<" / "<<b<<" = "<<((a+b-1)/b)<<'\n';
	cout<<"round "<<a<<" / "<<b<<" = "<<round((double)a/b)<<'\n';
	
	return 0;
}