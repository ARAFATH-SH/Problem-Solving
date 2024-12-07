#include<iostream>
using namespace std;

int main(){
long long int a,b,c,d; cin>>a>>b>>c>>d;

a%=100;
b%=100;
c%=100;
d%=100;

int mul = a * b * c *d;
int last_digit = mul%100;

if(last_digit<10){
    cout<< "0" << last_digit <<endl;
}
else cout<<last_digit;


return 0;
}
