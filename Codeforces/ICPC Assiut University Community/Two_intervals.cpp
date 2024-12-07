#include<iostream>
using namespace std;

int main(){
int l1,l2,r1,r2;
cin>>l1>>r1>>l2>>r2;

int l_max =max(l1,l2);
int r_min=min(r1,r2);

if(r_min>=l_max){
    cout<<l_max<<' '<<r_min<<endl;
}
else cout<<-1;


return 0;
}
