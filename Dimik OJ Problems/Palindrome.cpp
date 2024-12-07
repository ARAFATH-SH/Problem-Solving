#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		char a[1100],b[1100];
		cin>>a;
		int len = strlen(a);
		for(int i=0; i<len; i++){
			b[i]=a[i];
		}
		b[len] = '\0';
		reverse(b, b+len);

		bool is_equal = true;

		for(int i=0; i<len; i++){
			if(a[i] != b[i]){
				is_equal = false;
			}
		}
		if(is_equal){
			cout << "Yes! It is palindrome!\n";
		}
		else{
			cout << "Sorry! It is not palindrome!\n";
		}

	}
	return 0;
}