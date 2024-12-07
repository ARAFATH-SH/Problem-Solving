#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // this is a built in fucntion that's count all set bits
//__builtin_popcountll(); // this is a built in fucntion that's count all set bits for long long int

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n,k; 
	cin>>n>>k;
	cout<< (n & ((1u<<31) - (1u<<k)))<<endl;
	return 0;
}