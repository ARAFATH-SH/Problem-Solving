#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	
	while(t--){
	    int n,m; 
	    cin>>n>>m;
	    int a[n];
	    for(int i=1; i<=n; i++) cin>>a[i];
	    
	    int frq[100+5] = {0};
	    int cont = 0;
	    for(int i=1; i<=n; i++){
	        if(frq[a[i]] != 0){
	            continue;
	        }
	        else{
	            frq[a[i]]++;
	            cont++;
	        }
	    }
	    cout<< m-cont <<'\n';
	}
}
