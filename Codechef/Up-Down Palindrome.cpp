#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int>v(n);
	    
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    
	    ll L = -1e18, R = 1e18;
	    bool is_palindrome_possible = true;
	    for(int i=0; i<n/2; i++){
	        int x = v[i];
	        int y = v[n-i-1];
	        
	        if(x==y) continue;
	        if(abs(x-y)!=2) {
	            is_palindrome_possible = false;
	            break;
	        }
	        
	        ll maxi = max(x,y);
	        ll mini = min(x,y);
	        
	        L = max(L,mini);
	        R = min(R, maxi-1);
	        
	        if(L > R) {
	            is_palindrome_possible = false;
	            break;
	        }
	    }
	    if(is_palindrome_possible) cout<<"Yes\n";
	    else cout<<"No\n";
	}

}
