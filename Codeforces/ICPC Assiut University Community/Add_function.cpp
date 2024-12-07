#include<iostream>
using namespace std;

int add(long long int x, long long int y){

    int sum = x + y;

    return sum;

}

int main(){

    long long int x,y;

     cin>>x>>y;

     cout<<add(x,y)<<endl;

return 0;
}
