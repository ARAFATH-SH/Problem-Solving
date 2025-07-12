#include<bits/stdc++.h>
using namespace std;

const int N = 30;
int n;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		int value = 1;
		for(int j=0; j<=i; j++){
			cout<<value<<' ';
			value = value * (i-j) / (j+1);
		}
		cout<<'\n';
	}

	return 0;
}