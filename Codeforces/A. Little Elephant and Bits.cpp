#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
char s[N];

//__builtin_popcount(); // this is a built in fucntion that's count all set bits
//__builtin_popcountll(); // this is a built in fucntion that's count all set bits for long long int

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	cin>>s;
	int len = strlen(s);
	int first_zero = 0;
	for(int i=0; i<len; i++){
		if(s[i]=='0'){
			first_zero = i;
			break;
		}
	}
	if(first_zero == 0){
		for(int i=0; i<len - 1; i++){
			cout<<1;
		}
	}
	else{
		for(int i=0; i<len; i++){
			if(i!=first_zero){
				cout<<s[i];
			}
		}
	}
	return 0;
}