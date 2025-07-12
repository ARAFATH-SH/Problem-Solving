#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; cin>>s;

	int cont = 1;
	int maxiCount = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i]==s[i+1]){
			cont++;
		}
		else cont = 1;

		maxiCount = max(maxiCount,cont);

	}

	cout<<maxiCount;
	
	return 0;
}