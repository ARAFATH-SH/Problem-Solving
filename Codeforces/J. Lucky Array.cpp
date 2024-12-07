#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int minimum = INT_MAX;
	for(int i = 1; i<=n; i++){
		minimum = min(minimum,a[i]);
	}
	int frequency = 0;
	for(int i = 1; i<=n; i++){
		if(a[i]==minimum){
			frequency++;
		}
	}
	if(frequency%2==0){
		cout<<"Unlucky\n";
	}
	else{
		cout<<"Lucky\n";
	}
	return 0;
}