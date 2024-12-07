#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count_A = 0;
		int count_B= 0;
		for(int i=0; i<5; i++ ){
			if(s[i]=='A'){
				count_A++;
			}
			else{
				count_B++;
			}
		}
		if(count_A>count_B){
			cout<<"A"<<endl;
		}
		else{
			cout<<"B"<<endl;
		}
		

	}
	return 0;
}