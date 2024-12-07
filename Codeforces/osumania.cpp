#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int y = 0;
		for(int i=0; i<n; i++){
			string s;
			cin>>s;

			for(int i = 0; i<s.size(); i++){
				if(s[i]=='#'){
					a[y] = i+1;
					y++;
				}
			}
		}
		for(int i=n-1; i>=0; i--){
			cout<<a[i]<<' ';
		}
			cout<<endl;
	}
	return 0;
}