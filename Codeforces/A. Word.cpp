#include<bits/stdc++.h>
using namespace std;

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	char s[1000];
	cin>>s;
	int len = strlen(s);
	int upper_case = 0;
	int lower_case = 0;
	for(int i=0; i<len; i++){
		if(isupper(s[i])){
			upper_case++;
		}
		if(islower(s[i])){
			lower_case++;
		}
	}
	if(upper_case>lower_case){
		for(int i=0; i<len; i++){
			cout<<(char)toupper(s[i]);
		}
	}
	else{
		for(int i=0; i<len; i++){
			cout<<(char)tolower(s[i]);
		}
	}
	cout<<'\n';
	return 0;
}
//time = O(n);
//space = O(1);
