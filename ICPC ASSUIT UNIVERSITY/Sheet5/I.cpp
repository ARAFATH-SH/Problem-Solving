#include<bits/stdc++.h>
using namespace std;

void swapMatrix(int n){
	int x,y;
	cin>>x>>y;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	x--,y--;
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
}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	swapMatrix(n);

	return 0;
}