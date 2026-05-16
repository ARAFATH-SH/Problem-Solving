#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	
	while(t--){
	    int x; cin>>x;
	    
	    int cost = 0;
	    if(x<=20){
	        cost = x*10;
	    }
	    else{
	        cost = 200 + ((x-20)/2) * 5;
	    }
	    cout<<cost<<'\n';
	}
}
