#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        vector<int>v(n+1);
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        
        int ans = 0;
        int total = 0;
        
        for(int j=2; j<=n; j++){
            
            if(v[j]>0) total+=v[j];
            
            ans = max(ans, total-j+1);
            
        }
        cout<<ans<<'\n';
    }
}
