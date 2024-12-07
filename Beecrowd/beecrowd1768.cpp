#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	while(cin>>n){
		int x = n/2+1;

		for(int i=1; i<=x; i++){
			
			for(int j=i; j<=n/2; j++){
			cout<<" ";
			}
			int y = 2*i - 1;
			for(int k =1; k<=y; k++){
				cout<<"*";
			}
			cout<<endl;
		}
	int cont = 1;
	while(cont<=2){
		for(int j=cont; j<=n/2; j++){
			cout<<" ";
		}
		int y = 2*cont - 1;
		for(int k=1; k<=y; k++){
			cout<<"*";
		}
		cout<<endl;
		cont++;
		}
		cout<<endl;
	}
	return 0;
}