#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n,h,c,l;

	while(cin>>n>>h>>c>>l){
		double o = n * sqrt(h*h + c*c);
		cout<<fixed<<setprecision(4)<<(o*l)/10000.0<<endl;
	}

	return 0;
}