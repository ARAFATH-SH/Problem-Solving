#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n; cin>>n;
 
    for(int i=1; i<=n; i++){
        int space = n-i;
        for(int j=1; j<=space; j++){
            cout<<' ';
        }
        int star = 2*i-1;
        for(int j=1; j<=star; j++){
            cout<<'*';
        }
        cout<<'\n';
    }
    for(int i=n; 0<i; i--){
        int space = n-i;
        for(int j=1; j<=space; j++){
            cout<<' ';
        }
        int star = 2*i-1;
        for(int j=1; j<=star; j++){
            cout<<'*';
        }
        cout<<'\n';
    }
 
}