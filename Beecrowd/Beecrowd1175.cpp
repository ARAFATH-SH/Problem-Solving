#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int N[20];
	for(int i=0; i<20; i++){
		cin>>N[i];
	}
	int j=0;
	int M[20];
	for(int i=19; i>=0; i--){
		M[j] = N[i];
		j++; 
	}
	for(int i=0; i<20; i++){
		cout<<"N["<<i<<"] = "<<M[i]<<endl;
	}
	return 0;
}