#include<bits/stdc++.h>
using namespace std;

bool chech_digit(char s[100]){
	int zero = 0;
	int one = 0;
	int length = strlen(s);
	for(int i =0; i<length; i++){
		if(s[i]=='0'){
			zero++;
			one = 0;
		}
		else {
			one++;
			zero = 0;
		}

		if(zero>=7 || one>=7){
			return true;
		}
		
	}
return false;
}


int main(){
	char s[100]; cin>>s;

	if(chech_digit(s)){
		cout<<"YES\n";
	}
	else cout<<"NO\n";

	return 0;
}