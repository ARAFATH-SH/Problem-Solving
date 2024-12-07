#include<iostream>
using namespace std;

int main(){
int n; cin>>n;
int maximum = 0;
for(int i=1; i<=n; i++){

    int x; cin>>x;
    maximum = max(maximum,x);
}
    cout<<maximum;

return 0;
}
