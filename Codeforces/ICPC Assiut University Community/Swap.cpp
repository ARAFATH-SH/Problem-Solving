#include<iostream>
using namespace std;

int a,b;
void swapi(){

   int temp = a;

   a=b;

   b=temp;

}

int main(){

cin>>a>>b;
swapi();
cout<<a<<' '<<b<<endl;
return 0;
}
