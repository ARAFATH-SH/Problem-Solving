#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){

    lli n; cin>>n;
    int cnt = 0;

    while(n%2==0){
        cnt++;
        n/=2;
    }
    cout<<cnt<<endl;
}

