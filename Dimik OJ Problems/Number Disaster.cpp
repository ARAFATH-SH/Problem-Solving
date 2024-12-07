#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		char n[10]; cin>>n;
		int len = strlen(n);

		while(len>=2 && n[len-1]=='0'){
			n[len-1]='\0';
			len--;
		}

		reverse(n, n + len);
		cout<<n<<endl;
		
	}
	
	return 0;
}