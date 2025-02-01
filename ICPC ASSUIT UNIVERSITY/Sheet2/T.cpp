#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	for(int i=1; i<=n; i++){
		int space = n-i;
		for(int j=1; j<=space; j++){
			cout<<' ';
		}
		int star = 2*i-1;
		for(int k=1; k<=star; k++){
			cout<<'*';
		}
		cout<<'\n';
	}

	return 0;
}