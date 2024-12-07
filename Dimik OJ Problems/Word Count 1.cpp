#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		char s[10100];
		cin.getline(s,10100);
		int length = strlen(s);
		int cont = 1;
		for(int i=0; i<length; i++){
			if(s[i]!= ' ' && s[i+1]==' '){
				cont++;
			}
		}
		cout<<"Count = "<<cont<<endl;
	}
	return 0;
}