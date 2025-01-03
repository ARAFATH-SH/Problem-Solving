#include<bits/stdc++.h>
using namespace std;

const int N = 12;
int p[N];

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;

	for(int i=1; i<=n; i++){
		p[i] = i;
	}

	do{
		for(int i=1; i<=n; i++){
			cout<<p[i];
		}
		cout<<'\n';
	} while(next_permutation(p+1, p+n+1));
	
	return 0;
}