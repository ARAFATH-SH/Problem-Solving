#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[25];
	char b[25];
	cin>>a>>b;
	int len_a = strlen(a);
	int len_b = strlen(b);
	int len = min(len_a,len_b);

	for(int i=0; i<len; i++){
		if(a[i]<b[i]){
			cout<<a<<endl;
			return 0;
		}
		else if(a[i]>b[i]){
			cout<<b<<endl;
			return 0;
		}
	}

	if(len_a <= len_b){
		cout<<a<<endl;
	}
	else {
		cout<<b<<endl;
	}

	return 0;
}