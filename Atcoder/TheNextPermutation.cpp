#include<bits/stdc++.h>
using namespace std;

const int N = 85;
char s[N];

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cin>>tc;
	while(tc--){
		int datasetNumber;
		cin>>datasetNumber>>s;

		int n = strlen(s);
		bool exist = next_permutation(s,s+n);

		if(exist){
			cout<<datasetNumber<<' '<<s<<'\n';
		}
		else{
			cout<<datasetNumber<<' '<<"BIGGEST"<<'\n';
		}
	}
	return 0;
}