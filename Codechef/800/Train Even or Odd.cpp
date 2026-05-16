#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	std::cin >> t;
	
	while(t--){
	    int n; cin>>n;
	    
	    int a[n];
	    for(int i=0; i<n; i++) cin>>a[i];
	    
	    int even = 0 , odd = 0;
	    
	    for(int i=0; i<n; i++){
	        if(i%2==0) even += a[i];
	        else odd += a[i];
	    }
	    cout<< max(even,odd) <<'\n';
	}

}
