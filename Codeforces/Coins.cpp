#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n,sum;
	cin>>n>>sum;
	int ans;
	/*while(sum>=n){
		ans++;
		sum-=n;
	}*/
	/*ans = sum/n;
	sum = sum%n;
	if(sum>0){
		ans++;
	}*/
	cout<<(sum+n-1)/n<<endl;
	return 0;
}