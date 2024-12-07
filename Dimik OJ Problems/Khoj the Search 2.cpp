#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		char a[200],b[200];
		cin>>a>>b;
		int len_a = strlen(a);
		int len_b = strlen(b);
		int cnt = 0;
		for(int start = 0; start + len_b - 1<len_a; start++){
			bool is_equal = true;
			for(int i = 0; i<len_b; i++){
				if(a[start + i] != b[i]){
					is_equal = false;
				}
			}
			if(is_equal){
				cnt++;
			}
		}
		cout<<cnt<<endl;

	}
	return 0;
}
