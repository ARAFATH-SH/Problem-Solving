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

	int max_row = INT_MIN, min_row = INT_MAX, max_col = INT_MIN, min_col = INT_MAX;

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(s[i][j]=='#'){
				max_row = max(max_row,i);
				min_row = min(min_row,i);
				max_col = max(max_col,j);
				min_col = min(min_col,j);
			}
		}
	}

	bool is_rectangle = true;

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
				if(s[i][j]=='.'){
					if(min_row<=i and max_row>=i and min_col<=j and max_col>=j){
					is_rectangle = false;
				}
			}
		}
	}
	cout<<(is_rectangle?"Yes\n":"No\n");
	return 0;
}