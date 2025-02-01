#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	int year = n/365;
	int month = (n%365)/30;
	int day = (n%365)%30;

	cout<<year<<" years\n";
	cout<<month<<" months\n";
	cout<<day<<" days\n";
	
	return 0;
}