#include<iostream>
using namespace std;

int main(){
int n; cin>>n;

for(int i=1; i<=n; i++){

        int stars = n - i + 1;

    for(int j=1; j<=stars; j++){

        cout<<"*";

    }
    cout<<endl;
}

return 0;
}
