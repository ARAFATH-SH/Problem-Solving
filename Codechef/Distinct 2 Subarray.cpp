#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        
        bool is_good_subarray = false;
        
        for (int i=1; i<n; i++){
            if(v[i-1] != v[i]){
                is_good_subarray = true;
                break;
            }
        }
        
        if(is_good_subarray) cout<<2<<'\n';
        else cout<<-1<<'\n';
        
    }
}
