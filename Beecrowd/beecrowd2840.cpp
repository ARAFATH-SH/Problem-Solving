#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 


int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	double r,l;
	cin>>r>>l;
	double a = 1.333333333 * 3.1415 * pow(r,3);
	int result = l/a;
	cout<< result <<endl;
	return 0;
}