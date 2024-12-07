#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

const int N = 1e3 + 9;
int a[N];

void Recursion(int i){
	
	if(i<0) return;

	else if(i%2==0) cout<<a[i]<<" ";
	Recursion(i-1);

}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	Recursion(n-1);
	return 0;
}