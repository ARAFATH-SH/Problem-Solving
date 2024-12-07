#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int maximum = -1e9;
	int minimum = 1e9;
	int minimum_index = 0;
	int maximum_index = 0;
	for(int i=0; i<n; i++){
		if(a[i]<minimum){
			minimum = a[i];
			minimum_index = i;
		}
		if(a[i]>maximum){
			maximum = a[i];
			maximum_index = i;
		}
	}

	a[maximum_index]=minimum;
	a[minimum_index]=maximum;

	for(int i=0; i<n; i++){
		cout<<a[i]<<' ';
	}

	return 0;
}