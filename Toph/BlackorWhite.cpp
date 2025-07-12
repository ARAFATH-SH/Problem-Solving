#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a,b; cin>>a>>b;

	if((a[a.size()-1]+b[b.size()-1])%2==0){
		cout<<"Black\n";
	}
	else cout<<"White\n";
	return 0;
}