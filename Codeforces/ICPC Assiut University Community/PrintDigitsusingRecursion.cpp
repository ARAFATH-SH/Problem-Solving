#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

void Recursion(int n){
	if(n==0) return;

	int last_digit = n%10;
	int without_last_digit = n/10;

	Recursion(without_last_digit);
	cout<<last_digit<<" ";

}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int t;
	cin>>t;
	while(t--){
	
	int x;
	cin>>x;

	if(x==0){
		cout<<0<<endl;
	}
	else{
		Recursion(x);
		cout<<endl;
	}

}
	
	return 0;
}