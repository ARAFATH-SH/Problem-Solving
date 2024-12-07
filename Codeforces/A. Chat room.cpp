#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	string s;
	cin>>s;
	string k = "hello";
	int j = 0, count = 0;
	for(int i= 0; i < s.size(); i++){
		if(s[i]==k[j]){
			j++;
			count ++;
		
		if(count==5){
			cout<<"YES";
			return 0;
		}
		}
	}
	cout<<"NO";
	return 0;
}