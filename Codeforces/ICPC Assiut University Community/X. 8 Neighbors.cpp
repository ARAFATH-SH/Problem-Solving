#include<bits/stdc++.h>
using namespace std;

const int N = 105;
char s[N][N];
int n,m;

bool is_inside(int i , int j){

	if(i>=0 and i<n and j>=0 and j<m){
		return true;
	}
	return false;
}

bool is_valid(int i, int j){

	if(!is_inside(i,j)) return true;
	if(s[i][j]=='x') return true;
	return false;
}

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>s[i];
	}
	int x,y;
	cin>>x>>y;
	--x;--y;

	if(is_valid(x-1,y) and is_valid(x,y-1) and is_valid(x+1,y) and is_valid(x,y+1) and is_valid(x-1,y-1) and is_valid(x+1,y-1) and is_valid(x-1,y+1) and is_valid(x+1,y+1)){
		cout<<"yes\n";
	}
	else{
		cout<<"no\n";
	}

	return 0;
}