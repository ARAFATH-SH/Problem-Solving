#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin>>s;
	string store[1000/2];
	int l=0,r=0,index=0;
	string neww;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='L') {
			l++;
			neww+='L';
		}
		else {
			r++;
			neww+="R";
		}
		if(l==r){
			store[index] = neww;
			neww = "";
			index++;
		}
	}
	cout<<index<<'\n';
	for(int i=0; i<index; i++){
		cout<<store[i]<<'\n';
	}
	return 0;
}