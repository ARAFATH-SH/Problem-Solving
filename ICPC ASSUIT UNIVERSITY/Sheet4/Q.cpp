#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	int flg = 0;
	while(cin>>s){
		reverse(s.begin(),s.end());
		if(flg){
			cout<<' ';
		}
		flg = 1;
		cout<<s;
	}
	return 0;
}