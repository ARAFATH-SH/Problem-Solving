#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;

	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;

		bool isUniversal = false;

		for(int i=1; i<n; i++){
			if(s[i]!=s[i-1]){
				isUniversal = true;
				break;
			}
		}

		if(k>=1){
			if(isUniversal){
				cout<<"YES\n";
			}
			else cout<<"NO\n";
			continue;
		}

		if(!isUniversal){
			cout<<"NO\n";
			continue;
		}

		string reverseString = s;
		reverse(reverseString.begin(),reverseString.end());
		if(s<reverseString){
			cout<<"YES\n";
		}
		else cout<<"NO\n";

	}

	return 0;
}