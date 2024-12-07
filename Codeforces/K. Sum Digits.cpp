#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	char a[n];
	cin>>a;
	int sum = 0;
	for(int i=0; i<n; i++){
		sum = sum + a[i]-'0';
	}
	cout<<sum;
}