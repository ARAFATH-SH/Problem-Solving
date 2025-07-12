#include<bits/stdc++.h>
using namespace std;

void Print1toN(int n){
	if(n==1){
		cout<<1;
		return ;
	}
	cout<<n<<' ';
	Print1toN(n-1);
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	Print1toN(n);
	
	return 0;
}