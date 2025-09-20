#include<bits/stdc++.h>
using namespace std;


int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		string s; cin>>s;

		int min_pos = 1;
		int max_pos = n;
		vector<int>v(n);

		for(int i=n-1; i>=0; i--){
			
			if(s[i]=='<'){
				v[i+1]=min_pos;
				min_pos++;
			}
			// cout<<"mini "<<min_pos<<' '<<max_pos<<'\n';
			if(s[i]=='>'){
				v[i+1]=max_pos;
				max_pos--;
			}
			// cout<<"maxi "<<min_pos<<' '<<max_pos<<'\n';
		}

		v[0]=min_pos;

		for(auto x: v){
			cout<<x<<' ';
		}
		cout<<'\n';

	}
	
	return 0;
}