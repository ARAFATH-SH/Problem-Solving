#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int total_combination(int n, int r){

	if(n<r or n<0 or r<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	return total_combination(n-1,r) + total_combination(n-1,r-1);

}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n,r;
	cin>>n>>r;
	cout<<total_combination(n,r)<<endl;
	return 0;
}