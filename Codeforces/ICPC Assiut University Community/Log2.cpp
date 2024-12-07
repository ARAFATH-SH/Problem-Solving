#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int cont=0;
long long log_1(long long n){
	
	if(n<=0){
		return 0;
	}

	cont+=1;
	
	log_1(n/2);
	
	return cont;

}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	long long n;
	cin>>n;
	log_1(n);
	cout<<cont-1<<endl;
	return 0;
}