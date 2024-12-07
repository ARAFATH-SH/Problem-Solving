#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int x,z;
	cin>>x>>z;
	while(z<=x){
		cin>>z;
	}
	int a = 1, m = 0;
	for(int i = x; i<=z; i++){

		m+=i;
		if(m>z) break;
		a++;

	}
	cout<<a<<endl;
	return 0;
}