#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int T;
	cin>>T;
	int N[1000];
	int j = 0;
	for(int i=0; i<1000; i++){
		cout<<"N["<<i<<"] = "<< j <<endl;
		j++;
		if(j==T) j=0;

	}
	return 0;
}