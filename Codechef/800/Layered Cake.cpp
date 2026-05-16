#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	std::cin >>t;
	
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a[x], b[y];
	    for(int i=0; i<x; i++){
	        cin>>a[i];
	    }
	    for(int i=0; i<y; i++){
	        cin>>b[i];
	    }
	    
	    int cnt = 0;
	    for(int i=0; i<y; i++){
	        for(int j=0; j<x; j++){
	            if(a[j] > b[i]) cnt++;
	        }
	    }
	    cout<<cnt<<'\n';
	}

}
