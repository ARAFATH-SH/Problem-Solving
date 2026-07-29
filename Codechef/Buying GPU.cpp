#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t; cin>>t;
	
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    if(y>=z){
	        cout<<-1<<'\n';
	    }
	    else{
	        int count_day = 0;
	        int earn = 0;
	        
	        while(x>earn){
	            x+=y;
	            earn+=z;
	            count_day++;
	        }
	        cout<<count_day<<'\n';
	    }
	    
	}

}
