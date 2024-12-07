#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

const int N = 1e3 + 9;
int a[N];
int n;

int max_number(int i){

	if(i==n) return INT_MIN;

	return max(a[i],max_number(i+1));

}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<max_number(0)<<endl;
	return 0;
}