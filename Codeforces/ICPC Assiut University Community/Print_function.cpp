#include<iostream>
using namespace std;

void loop(int n){

    for(int i=1; i<=n; i++){
    if(i>1)cout<<' ';
        cout<<i;
    }
    cout<<endl;
}


int main(){

    int x; cin>>x;

    loop(x);

return 0;
}
