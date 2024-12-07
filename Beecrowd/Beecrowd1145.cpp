#include<iostream>
using namespace std;
int main()  {
    int a,b,c; cin>>a>>b;
    c=1;

    for(int i=1; i<=b; i++){
            if(c==a){
                cout<<i<<endl;
                c=1;
            }
            else{
                cout<<i<<' ';
                c++;
            }
        }

    return 0;
    }