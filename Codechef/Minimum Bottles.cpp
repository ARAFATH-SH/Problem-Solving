#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    
    while(t--){
        int n,x; cin>>n>>x;
        
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        
        int sum = accumulate(v.begin(),v.end(),0);
        
        int ans = ceil((double)sum/(double)x);
        
        cout<<ans<<'\n';
    }
}
