#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a,b,div; cin>>a>>b;
    cout<<"floor "<<a<<" / "<<b<<" = "<< floor(a/b)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<< ceil(a/b)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<< round(a/b);

    return 0;

}
