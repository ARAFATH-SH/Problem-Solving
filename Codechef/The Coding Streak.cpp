#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	ll t; cin>>t;
	
	while(t--){
	    ll n; cin>>n;
	    vector<ll>v(n);
	    
	    for(ll i=0; i<n; i++){
	        cin>>v[i];
	    }
	    
	    ll maxi = 0, cnt =0;
	    
	    for(ll i=0; i<n; i++){
	        if(v[i]==0){
	            maxi = max(maxi, cnt);
	            cnt = 0;
	        }
	        else{
	            cnt++;
	        }
	    }
	    maxi = max(maxi, cnt);
	    cout<<maxi<<'\n';
	}
}
