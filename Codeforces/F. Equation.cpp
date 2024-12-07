#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

void equation(int y, int z){
	long long sum = 0;
	for(int i=2; i<=z; i+=2){
		sum = sum + pow(y,i);
	}
	cout<<sum<<endl;
}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int x,n;
	cin>>x>>n;
	equation(x,n);
	return 0;
}