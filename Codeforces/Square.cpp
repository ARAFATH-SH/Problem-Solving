#include<bits/stdc++.h>
using namespace std;

int main(){

int t; cin>>t;

while(t--){

    int x,y;
    int maximum = 100000000;
    int minimum = -100000000;

    for(int i=0; i<4; i++){

        cin>>x>>y;

        minimum = max(minimum,x);
        maximum = min(maximum,x);

    }

    long long Answer = (minimum-maximum)*(minimum-maximum);
    cout<<Answer<<endl;

}

return 0;
}
