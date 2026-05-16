#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin>>t;
    
    while(t--){
        int n,x,k; cin>>n>>x>>k;
        vector<int>value(n);
        
        for(int i=0; i<n; i++){
            cin>>value[i];
        }

        map<int, int, greater<int>> mp;
        
        for(int i=0; i<n; i++){
            mp[value[i]]++;
        }
        
        int clusterValue = 0;

        for(auto v: mp){
            if(k>0){
                clusterValue+=v.second;
            }
            k--;
        }      
        if(x>=clusterValue){
            cout<<clusterValue<<'\n';
        }
        else{
            cout<<x<<'\n';
        }
    }

}
