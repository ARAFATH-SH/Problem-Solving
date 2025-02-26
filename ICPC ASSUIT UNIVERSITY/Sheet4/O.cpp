#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int frequency[26];
	memset(frequency, 0, sizeof(frequency));
	int n; cin>>n;

	for(int i=0; i<n; i++){
		char c; cin>>c;
		frequency[c-97]++;
	}

	for(int i=0; i<26; i++){
		while(frequency[i]!=0){
			cout<<char(i+97);
			frequency[i]--;
		}
	}

	return 0;
}