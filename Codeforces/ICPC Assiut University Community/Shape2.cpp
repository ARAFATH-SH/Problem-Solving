#include<iostream>
using namespace std;

int main(){
int n; cin>>n;

for(int i=1; i<=n; i++ ){

    int spaces = n-i;

    for(int j=1; j<=spaces; j++){

        cout<<' ';

    }
    int stars = 2 * i - 1;

    for(int k=1; k<=stars; k++){

        cout<<"*";

    }

    cout<<endl;
}


return 0;
}
