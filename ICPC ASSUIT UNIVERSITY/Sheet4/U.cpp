#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; cin>>s;

	int frequency[26]={0};

	transform(s.begin(),s.end(),s.begin(), ::tolower);

	for(int i=0; i<s.size(); i++){
		frequency[s[i]-97]++;
	}

	int mini = min(frequency[4],min(frequency[6],min(frequency[15],min(frequency[19],frequency[24]))));
	cout<<mini;

		
	return 0;
}