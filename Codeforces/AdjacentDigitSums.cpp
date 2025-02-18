#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int digit_sum(int x){
	int sum = 0;
	while(x){
		int last_digit = x%10;
		sum+=last_digit;
		x/=10;
	}
	return sum;
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		int a,b; cin>>a>>b;
		int flag = 0;
		for(int i=0; i<1000000; i++){
			if(digit_sum(i)==a && digit_sum(i+1)==b){
				flag = 1;
				break;
			}
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";

	}

	return 0;
}