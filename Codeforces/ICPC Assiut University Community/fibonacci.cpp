#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int fibonacci(int n){
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	cout<<fibonacci(n)<<endl;
	return 0;
}