#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin>>s;
	int n = s.size();
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+1; k<n; k++){
				if(s[i]=='A' && s[j]=='B' && s[k]=='C' && (j-i==k-j)){
					ans++;
				}
			}
		}
	}
	cout<<ans<<'\n';

	return 0;
}