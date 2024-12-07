#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=2; i<=5; i++){
		int count = 0;
		for(int j = 0; j<n; j++){
			if(a[j]%i==0){
				count++;
			}
		}
		cout<<count<<" Multiplo(s) de "<<i<<endl;
	}

	return 0;
}