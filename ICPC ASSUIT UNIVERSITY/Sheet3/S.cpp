#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,x; cin>>n>>m;
	int a[n][m];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	cin>>x;

	bool is_found = false;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]==x) is_found = true;
		}
	}

	if (is_found)
	{
		cout<<"will not take number\n";
	}
	else{
		cout<<"will take number\n";
	}


	return 0;
}