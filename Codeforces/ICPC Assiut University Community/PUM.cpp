#include<iostream>
using namespace std;

int main(){

int n; cin>>n;

int first_number = 1;

for(int i=1; i<=n; i++){

    for(int j=first_number; j<=first_number+2; j++){

        cout<<j<<' ';

    }
    cout<<"PUM"<<endl;
    first_number+=4;

}

return 0;
}

