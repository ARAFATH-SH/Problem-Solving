#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n+1];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int b[n+1];
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0; i<n; i++){
		if(a[i]!=b[i]){
			cout<<"no\n";
			return 0;
		}
	}
	cout<<"yes\n";
	return 0;
}