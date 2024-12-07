#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

void Recursion(int x){
	if(x==0){
		return;
	}
	cout<<"I love Recursion"<<"\n";
	Recursion(x-1);
}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	Recursion(n);
	return 0;
}