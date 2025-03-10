#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin>>s;
	int cnt=0;
	int frequency[30];
	memset(frequency,0,sizeof(frequency));

	int cont = 0;
	for(int i=0; i<s.size(); i++){
		frequency[s[i]-96]++;
		if(frequency[s[i]-96]==1) cont++;
	}
	if(cont&1){
		cout<<"IGNORE HIM!\n";
	}
	else{
		cout<<"CHAT WITH HER!\n";
	}

	return 0;
}