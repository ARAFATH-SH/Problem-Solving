#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s;
		for(int i = 1; i<=n; i++){
			if(i%2==1){
				s = s + "##";
			}
			else {
				s = s + "..";
			}
		}
		string t;
		for(int i = 1; i<=n; i++){
			if(i%2==1){
				t = t + "..";
			}
			else {
				t = t + "##";
			}
		}

		for(int i = 1; i<=n; i++){
			if(i%2==1){
				cout<<s<<endl<<s<<endl;
			}
			else {
				cout<<t<<endl<<t<<endl;
			}
		}

	}
	return 0;
}




































