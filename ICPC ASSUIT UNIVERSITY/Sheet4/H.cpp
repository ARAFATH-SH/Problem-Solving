#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int pos1 = s.find("010");
		int pos2 = s.find("101");
		if(pos1!=-1 || pos2!=-1){
			cout<<"Good\n";
		}
		else cout<<"Bad\n";
	}

	return 0;
}