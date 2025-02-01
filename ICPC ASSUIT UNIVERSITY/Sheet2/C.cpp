#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int even = 0, odd = 0, pos = 0, neg = 0;

	for(int i=0; i<n; i++){
		if(a[i]%2==0) even++;
		if(a[i]%2!=0) odd++;
		if(a[i]>0) pos++;
		if(a[i]<0) neg++;
	}

	cout<<"Even: "<<even<<'\n';
	cout<<"Odd: "<<odd<<'\n';
	cout<<"Positive: "<<pos<<'\n';
	cout<<"Negative: "<<neg<<'\n';


	return 0;
}