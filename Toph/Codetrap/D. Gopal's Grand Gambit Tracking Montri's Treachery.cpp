#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	int a[n];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int q;
	cin>>q;
	while(q--){
		int p,t;
		cin>>p>>t;
		int temp = a[p];
		a[p] = temp - t;
		
		if(a[p]<0){
			a[p] = 0;
		}		

		int maximum = 0;
		for(int i=1; i<=n; i++){
			maximum = max(a[i],maximum);
		if(maximum>100000){
			cout<<0<<endl;
			break;
		}
		}
		cout<<maximum<<endl;
	}
	return 0;
}