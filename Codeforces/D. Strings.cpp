#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	string t;
	cin>>s>>t;
	string u = s + t;
	int s_len = s.size();
	int t_len = t.size();

	for(int i=0; i<1; i++){
		swap(s[i],t[i]);
	}
	cout<<s_len<<' '<<t_len<<endl<<u<<endl;
	cout<<s<<' '<<t<<endl;

	return 0;
}