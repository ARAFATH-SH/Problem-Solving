#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 1; i<=n; i++){
		cin>>a[i];
	}
	int minimum = INT_MAX;
	int x = 0;
	for(int i = 1; i<=n; i++){
		if(a[i]<minimum){
			minimum = a[i];
			x = i;
		}
	}
	cout<<minimum<<' '<<x<<endl;
	return 0;
}