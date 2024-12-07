#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	int len = a.size();
	int frequency[26];
	for(int i=0; i<26; i++){
		frequency[i]=0;
	}
	for(int i=0; i<len; i++){
		int character_rank = a[i]-'a';
		frequency[character_rank]++;
	}

	for(char ch = 'a'; ch<='z'; ch++){
		int character_rank = ch - 'a';
		if(frequency[character_rank]>0){
			cout<<ch<<" : "<<frequency[character_rank]<<endl;
		}
	}

	return 0;
}