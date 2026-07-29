#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        int x,y,p;
        cin>>x>>y>>p;
        
        int maxi = max(x,y);
        int mini = min(x,y);
        
        int cnt = 0;
        while((maxi*mini) < p){
            cnt++;
            if(maxi>=mini){
                mini++;
            }
            else {
                maxi++;
            }
        }
        cout<<cnt<<'\n';
    }
}
