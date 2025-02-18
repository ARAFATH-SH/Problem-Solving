#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m,n; cin>>m>>n;
	char s[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>s[i][j];
		}
	}

	int x,y; cin>>x>>y;
	x--;y--;
	if(s[x-1][y-1]=='.' || s[x-1][y]=='.' || s[x-1][y+1]=='.' ||
	s[x][y-1]=='.' || s[x][y+1]=='.' || s[x+1][y-1]=='.' || 
	s[x+1][y]=='.' || s[x+1][y+1]=='.') cout<<"no\n";

	else cout<<"yes\n";

	return 0;
}