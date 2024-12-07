#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int sequence(int n){
	if(n==1){
		return 1;
	}
	if(n%2==1){
		return 1 + sequence(3*n + 1);
		
	}
	else{
		return 1 + sequence(n/2);
		
	}
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	cout<<sequence(n)<<endl;
	return 0;
}