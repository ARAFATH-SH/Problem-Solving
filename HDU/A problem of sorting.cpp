#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		cin.ignore();
		vector<pair<int, string>>v;
		string s;
		while(n--){
			getline(cin,s);
			int len = s.size();
			string age_in_string = s.substr(len-4);
			int age = stoi(age_in_string);
			string name = s.substr(0,len-5);
			v.push_back({age,name});
		}
		sort(v.rbegin(),v.rend());
		for(auto x : v){
			cout<<x.second<<'\n';
		}

	}
	
	return 0;
}