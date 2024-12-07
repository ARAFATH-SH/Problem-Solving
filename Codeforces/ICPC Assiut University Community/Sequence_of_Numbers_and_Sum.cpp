#include<iostream>
using namespace std;

int main(){
int x,y;

while(cin>>x>>y){

    if(x<=0 || y<=0){
        break;
    }

    if(x>y){
        swap(x,y);
    }

    int sum =0;
    for(int i=x; i<=y; i++){

        cout<<i<<' ';
        sum+=i;

    }

    cout<<"sum ="<<sum<<endl;

}

return 0;
}
