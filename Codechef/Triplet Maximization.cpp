#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
    int t; cin>>t;
    
    while(t--){
        int x,y;
        cin>>x>>y;
        int n = x + y;
        
        if(y >= n/3){
            cout<< 2 * (n/3)<<'\n';
        }
        else{
            cout<< y + n/3 <<'\n';
        }
    }
}
