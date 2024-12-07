#include<iostream>
using namespace std;

int main(){
char x; cin>>x;

if(x>='A' && x<='Z'){
    char small = x + 32;
    cout<<small<<endl;
}
if(x>='a' && x<='z'){
    char upper = x - 32;
    cout<<upper<<endl;
}

return 0;
}
