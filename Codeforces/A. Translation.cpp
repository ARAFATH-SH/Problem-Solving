#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	char s[101];
	char t[101];
	cin>>s>>t;
	int len_s = strlen(s);
	int len_t = strlen(t);
	int i,j;
	for(i=0, j=len_t-1; i<len_s, j>=0; i++,j--){
		if(s[i] != t[j]){
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}