#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[10000];
	cin>>s;
	if(islower(s[0])){
		s[0]=toupper(s[0]);
	}
	cout<<s;
	return 0;
}