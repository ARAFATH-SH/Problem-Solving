#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    
    while(t--){
        int n; cin>>n;
        int c1=0, c2=0;
        
        for(int i=0; i<n; i++){
            int clr; cin>>clr;
            
            if(clr==1){
                c1++;
            }
            else if(clr==2) c2++;
        }
        
        if(n%2 == 0){
            if(c1> n/2 or c2> n/2) cout<<"No\n";
            else cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
}
