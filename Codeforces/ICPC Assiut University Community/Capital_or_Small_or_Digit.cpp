#include<iostream>
using namespace std;

int main(){
char x; cin>>x;

if(isalpha(x)){
    cout<<"ALPHA"<<endl;
    if(isupper(x)){
        cout<<"IS CAPITAL\n";
    }
    else cout<<"IS SMALL\n";
}
else cout<<"IS DIGIT\n";
return 0;
}
