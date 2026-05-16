#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<int> v;
	    if((n+1)%3 != 0) {
	    	cout<<-1<<'\n';
	    	continue;
	    }

	    for(int i=1; i<=n; i++){
	    	int mod = i % 6;
	    	if(mod == 1 || mod == 2){
	    		v.push_back(1);
	    	}
	    	else if(mod == 3 || mod == 0){
	    		v.push_back(0);
	    	}
	    	else{
	    		v.push_back(m-1);
	    	}
	    }

	    for(auto ans : v){
	    	cout<<ans<<' ';
	    }
	    cout<<'\n';
	    
	}

}
