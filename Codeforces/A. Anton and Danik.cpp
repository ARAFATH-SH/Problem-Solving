#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count_A = 0;
	int count_B = 0;

	for(int i=0; i<s.size(); i++){
		if(s[i]=='A'){
			count_A++;
		}
		else{
			count_B++;
		}
	}

	if(count_A>count_B){
		cout<<"Anton\n";
	}
	else if(count_A<count_B){
		cout<<"Danik\n";
	}
	else{
		cout<<"Friendship\n";
	}

	return 0;
}