#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	bool is_lucky = false;
	int last_digit = n%10;
	n/=10;
	if(last_digit==0){
		cout<<"YES\n";
		return 0;
	}

	if(last_digit%n==0 || n%last_digit==0){
		is_lucky= true;
	}
	
	if(is_lucky){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
	return 0;
}