#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int>vec(n);
	    
	    for(int i=0; i<n; i++){
	        cin>>vec[i];
	    }
	    bool is_maintain_avg = true;
	    
	    for(int i=0; i<n; i++){
	        int remain = vec[i] - 40;
	        if(remain>=0){
	            vec[i+1] += remain;
	        }
	        else{
	            is_maintain_avg = false;
	            break;
	        }
	    }
	    
	    if(is_maintain_avg) cout<<"Yes\n";
	    else cout<<"No\n";
	}

}
