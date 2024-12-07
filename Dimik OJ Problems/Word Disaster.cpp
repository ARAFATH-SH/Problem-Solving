#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s [1010];
		cin.getline(s , 1010);
		int len = strlen(s);
		int i = 0;
		while(i<len){
			if(s[i] != ' '){
				int word_start = i;
				while(i<len && s[i] != ' '){
					i++;
				}
				int end_word = i - 1;
				for(int j = end_word; j>=word_start; j--){
					cout<<s[j];
				}
			}
			else{
				cout<<' ';
				i++;
		}
	}

		cout<<endl;
	}
	return 0;
}