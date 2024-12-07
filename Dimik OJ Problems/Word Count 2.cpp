#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		char s[10100];
		cin.getline(s , 10100);
		int len = strlen(s);
		int count_space = 1;
		for(int i = 0; i<len; i++){
			if(s[i]==' '){
				count_space++;
			}
		}
		cout<<"Count = "<<count_space<<endl;
	}
	return 0;
}