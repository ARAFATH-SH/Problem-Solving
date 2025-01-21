#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;cin>>t;
   while(t--){
        int n; cin>>n;
        int maximum_point = 0;
        int a[n];
        for(int i=1; i<=n; i++){
                cin>>a[i];
        }
        int b[n];
        for(int i=1; i<=n; i++){
                cin>>b[i];
        }
        for(int i=1; i<=n; i++){
            maximum_point = max(maximum_point,(a[i]*20 - b[i]*10));
        }
        cout<<maximum_point<<'\n';
   }
}

