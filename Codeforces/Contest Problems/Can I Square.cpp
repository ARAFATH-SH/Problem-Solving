#include<iostream>
#include<math.h>
using namespace std;
int main(){

int t; cin>>t;
while(t--){

    int buckets;
    cin>>buckets;
    long long int cont = 0;
    for(int i=1; i<=buckets; i++){

        long long int squares;
        cin>>squares;

        cont+=squares;

    }

    long long int sr = sqrtl(cont);

    if(sr * sr == cont){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}


return 0;
}
