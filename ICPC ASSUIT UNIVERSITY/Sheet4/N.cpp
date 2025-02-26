#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	string s; cin>>s;
	int cont=0;
	for(int i=0; i<n; i++){
		if(s[i]==s[i+1]){
			cont++;
		}
	}

	cout<<(s.size()-cont);

	return 0;
}