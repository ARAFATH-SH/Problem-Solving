#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	char s[n];
	for(int i=0; i<n; i++){
		if(i%2==0){
			s[i] = 'a';
		}
		else s[i] = 'i';

	}
	for(int i=0; i<n; i++){
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}