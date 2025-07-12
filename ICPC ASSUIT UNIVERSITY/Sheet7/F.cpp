#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int a[N];

void PrintEvenIndices(int n){
	if(n==-1){
		return ;
	}
	if(n%2==0){
		cout<<a[n]<<' ';
	}
	PrintEvenIndices(n-1);
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	n--;
	for(int i=0; i<=n; i++){
		cin>>a[i];
	}

	PrintEvenIndices(n);

	return 0;
}