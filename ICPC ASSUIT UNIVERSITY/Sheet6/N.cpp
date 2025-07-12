#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t,n,x;
	cin>>t>>n>>x;
	long long int digit = 0;
	if(t==1){
		while(n){
			int last_digit = n%10;
			cout<<last_digit;
			n/=10;
		}
	}
	else{
		while(n){
			int last_digit = n%x;
			cout<<last_digit;
			n/=x;
		}
	}

	return 0;
}