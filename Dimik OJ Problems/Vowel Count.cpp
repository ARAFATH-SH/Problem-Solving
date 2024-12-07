#include<bits/stdc++.h>
using namespace std;

bool is_vowel(char a){
	if(a=='a'|| a=='e' || a=='i' || a=='o'|| a=='u'){
		return true;
	}
	else {
		return false;
	}
}

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		char s[1010];
		cin.getline(s,1010);
	
		int length = strlen(s);
		int cont = 0;
		for(int i=0; i<length; i++){
			if(is_vowel(s[i])){
				cont++;
			}
		}
		cout<<"Number of vowels = "<<cont<<endl;
	}
	return 0;
}