#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int digit_fac(int x){
	if(x==0) return 1;
	return x * digit_fac(x-1);
}

bool is_curious(int n){
	int sum = 0;
	int m = n;	
	while(n){
		int last_digit = n%10;
		sum+=digit_fac(last_digit);
		n/=10;
	}
	return sum%m==0;
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	long long ans = 0;
	for(int i=10; i<=n; i++){
		if(is_curious(i)){
			ans+= i;
		} 
	}
	cout<<ans<<'\n';
	return 0;
}