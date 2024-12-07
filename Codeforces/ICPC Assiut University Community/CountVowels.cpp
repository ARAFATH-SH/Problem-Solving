#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

const int N = 205;
char s[N];
int len;

bool is_vowel(char s){
	s = tolower(s);
	if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
		return true;
	} 

	else {
		return false;
	}
}

int count_vowel(int i){
	if(i>len-1) return 0;

	int count = (int)is_vowel(s[i]);

	count += count_vowel(i+1);
	return count;
}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	cin.get(s,N);
	len = strlen(s);
	cout<<count_vowel(0)<<endl;
	return 0;
}