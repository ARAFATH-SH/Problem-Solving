#include<bits/stdc++.h>
using namespace std;

int s[30];
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string st; cin>>st;
	int n = st.size();
	for(int i=0; i<n; i++){
		s[st[i]-'`']++;
	}

	for(int i=0; i<30; i++){
		if(s[i]>0){
			cout<<char('a'+ i-1)<<" : "<<s[i]<<'\n';
		}
	}

	

	return 0;
}