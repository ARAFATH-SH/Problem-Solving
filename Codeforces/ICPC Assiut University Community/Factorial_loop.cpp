#include<iostream>
using namespace std;

int main(){
int t,i; cin>>t;

while(t--){
    int n; cin>>n;
    long long factorial = 1;
    for( i=1;i<=n;i++){
      factorial*=i;
    }
    cout<< factorial<<endl;

}


return 0;
}
