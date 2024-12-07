#include<iostream>
using namespace std;

int main(){
float n; cin>>n;

int interger_part = (int)n;

if(n==interger_part){
    cout<<"int "<<interger_part<<endl;
}
else{
    float decimal_part = n - interger_part;
    cout<<"float "<<interger_part<<' '<<decimal_part<<endl;
}


return 0;
}
