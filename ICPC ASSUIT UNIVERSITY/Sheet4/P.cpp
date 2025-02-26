#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; 
	getline(cin, s);
	int n = s.size();
	int cont = 1;
	for(int i=1; i<n; i++){
		if(!(s[i]>='A' && s[i]<='z') && (s[i+1]>='A' && s[i+1]<='z')) cont++;
		else continue;
	}
	
	cout<<cont;

	return 0;
}