#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
const int N =105;
int r,c;
int a[N][N];
int b[N][N];

void sum_matrix(int i, int j){
	if(i>=r) return;
	if(j>=c){
		sum_matrix(i+1, 0);
		return;
	}
	cout<<a[i][j] + b[i][j];
	if(j == c-1){
		cout<<'\n';
	}
	else{
		cout<<' ';
	}
	sum_matrix(i,j+1);
}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	
	cin>>r>>c;
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>b[i][j];
		}
	}
	sum_matrix(0,0);
	return 0;
}