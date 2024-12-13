#include<bits/stdc++.h>
using namespace std;
const int max_value = 1005,N=105;
int a[N];
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int max_multiples = 0, which_multiples=0;
	for(int k=2; k<=max_value; k++){
		int multiples = 0;
		for(int i=1; i<=N; i++){
			if(a[i]%k==0){
				multiples++;
			}
		}
		if(max_multiples<=multiples){
			max_multiples = multiples;
			which_multiples = k;
		}
	}
	cout<<which_multiples<<'\n';
	return 0;
}