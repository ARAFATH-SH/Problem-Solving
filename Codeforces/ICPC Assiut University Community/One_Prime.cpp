#include<iostream>
using namespace std;

int main(){

int x; cin>>x;

for(int i=2; i<x;i++){

    if(x%i==0){
        cout<<"NO"<<endl;
        return 0;
    }

}
if(x==1){
    cout<<"NO"<<endl;;
    return 0;
}
cout<<"YES"<<endl;

return 0;
}
