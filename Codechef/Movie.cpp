#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	
	while(t--){
	    int n,m,a,b,c;
	    cin>>n>>m>>a>>b>>c;
	    
	    int combo = min(n,m);
	    

	    if(n>combo) cout<<combo * c + (n-combo) * a <<'\n';
	    else if(m>combo) cout<<combo * c + (m-combo) * b <<'\n';
	    else cout<< combo*c <<'\n';
	}

}
