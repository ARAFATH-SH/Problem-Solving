#include<iostream>
using namespace std;

int main(){

int t; cin>>t;

while(t--){

    long long int n,k,product;
    cin>>n>>k;

    long long int ans = 1;
    for(int i=0; i<n; i++){
        cin>>product;
        ans*=product;
    }

    if(2023%ans==0){
        cout<< "YES\n";
        cout<< 2023/ans<<' ';

        for(int i=1; i<k; i++){
        cout<< 1;
        cout<<endl;
        }
    }
    else cout<<"NO\n";
}

return 0;
}
