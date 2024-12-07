#include<iostream>

using namespace std;

int main(){
int n,i; cin>>n;

if(n==0 || n==1){
        cout<<-1<<endl;
    }
for(int i=1; i<=n; i++){

    if(i%2==0){
        cout<<i<<endl;
    }

}

return 0;
}
