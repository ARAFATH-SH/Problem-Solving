#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,c,d; cin>>n>>c>>d;
		int len =n*n;
		int r=-1;
		int b1[len];
		int a[len];
		int minimum = INT_MAX;
		
		for(int i=0; i<len; i++){
			cin>>a[i];
			minimum = min(minimum,a[i]);
		}

		sort(a,a+len);

		int b[n][n];
		b[0][0]=minimum;
		for(int i=0; i<1; i++){
			for(int j=1; j<n; j++){
				b[i][j] = b[i][j-1] + d;
			} 
		}
		for(int i=1; i<n; i++){
			for(int j=0; j<n; j++){
				b[i][j] = b[i-1][j] + c; 
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				b1[++r] = b[i][j];
			}
		}
		sort(b1, b1+len);
		bool is_sorted = true;
		for(int i=0; i<len; i++){
			if(a[i]!=b1[i]){
				is_sorted = false;
				break;
			}
		}
		if(is_sorted){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}