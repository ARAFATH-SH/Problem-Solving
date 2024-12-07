#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
const int N = 22;
int n,expected_sum,a[N];
bool found;

void solve(int i, int total_sum){

	if(i>n){
		if(total_sum==expected_sum){
			found = true;
		}
		return;
	}

	solve(i+1 , total_sum+a[i]);
	solve(i+1 , total_sum-a[i]);
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>expected_sum;
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	found = false;
	solve(2,a[1]);
	if(found){
		cout<<"YES"<<'\n';
	}
	else cout<<"NO"<<'\n';
	return 0;
}