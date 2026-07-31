#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    
    if(n==1) cout<<0<<'\n';
    else if( (n+1) % 3 == 0) cout<<n+1<<'\n';
    else if( (n-1) % 3 == 0) cout<<n-1<<'\n';
    else cout<<n<<'\n';
}
