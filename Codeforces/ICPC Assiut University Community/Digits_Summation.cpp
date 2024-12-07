#include<iostream>
using namespace std;

int main(){
    long long int x,y,last_digit;
    cin>>x>>y;

    last_digit = (x%10)+(y%10);

    cout<<last_digit<<endl;
    return 0;

}
