#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int reverse_array[n];
	for(int i = 0; i<n; i++){
		reverse_array[i] = a[n-i-1]; 
	}
	for(int i=0; i<n; i++){
		if(a[i] != reverse_array[i]){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}