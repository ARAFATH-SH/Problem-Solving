#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char s1[10],s2[10]; cin>>s1>>s2;

	if(s1[0]=='s' and s2[0]=='f'){
		cout<<2<<'\n';
	}
	else if(s1[0]=='f' and s2[0]=='s'){
		cout<<3<<'\n';
	}
	else if(s1[0]=='f' and s2[0]=='f'){
		cout<<4<<'\n';
	}
	else{
		cout<<1<<'\n';
	}
	return 0;
}