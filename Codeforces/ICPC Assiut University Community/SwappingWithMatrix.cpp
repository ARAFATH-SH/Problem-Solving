#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	x--,y--;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	for(int column = 0; column<n; column++){
		swap(a[x][column],a[y][column]);
	}
	for(int row=0; row<n; row++){
		swap(a[row][x],a[row][y]);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}