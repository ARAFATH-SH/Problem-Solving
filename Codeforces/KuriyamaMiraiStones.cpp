#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int a[N],b[N];
long long prefix_sum_a[N],prefix_sum_b[N];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		b[i] = a[i];
	}
	sort(b+1, b+n+1);
	prefix_sum_a[0] = 0;
	for(int i=1; i<=n; i++){
		prefix_sum_a[i] = prefix_sum_a[i-1] + a[i];
	}
	prefix_sum_b[0] = 0;
	for(int i=1; i<=n; i++){
		prefix_sum_b[i] = prefix_sum_b[i-1] + b[i];
	}
	int q;
	cin>>q;
	while(q--){
		int type,l,r;
		cin>>type>>l>>r;
		long long sum = 0;
		if(type==1){
			sum = prefix_sum_a[r] - prefix_sum_a[l-1];
		}
		else{
			sum = prefix_sum_b[r] - prefix_sum_b[l-1];
		}
		cout<<sum<<'\n';
	}
	return 0;
}