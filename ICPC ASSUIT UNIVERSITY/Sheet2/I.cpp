#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int given_num = n;
	int reverse_num = 0;
	while(n){
		int last_digit = n%10;
		reverse_num = reverse_num * 10 + last_digit;
		n/=10;
	}

	if(given_num==reverse_num){
		cout<<reverse_num<<'\n';	
		cout<<"YES\n";
	}
	else{
		cout<<reverse_num<<'\n';	
		cout<<"NO\n";
	}


	return 0;
}