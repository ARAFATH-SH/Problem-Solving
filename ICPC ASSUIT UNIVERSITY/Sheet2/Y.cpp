#include<bits/stdc++.h>
using namespace std;

const int N = 47;
int fibo[N];

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	fibo[0]=0;
	fibo[1]=1;

	for(int i=2; i<N; i++){
		fibo[i] = fibo[i-1] + fibo[i-2]; 
	}

	int n; cin>>n;

	for(int i=0; i<n; i++){
		cout<<fibo[i]<<' ';
	}
	cout<<'\n';

	return 0;
}