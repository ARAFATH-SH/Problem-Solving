#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int N[10];
    int i,v;
    cin>>v;
    N[0] = v;
    cout<<"N["<<0<<"] = "<<N[0]<<endl;
    for(i = 1; i<=9; i++){
        N[i] = v<<i;
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
 
    return 0;
}