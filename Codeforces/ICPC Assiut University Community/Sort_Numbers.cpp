#include<iostream>
using namespace std;

int main(){
int a,b,c; cin>>a>>b>>c;

int maximum = max(max(a,b),c);
int minimum = min(min(a,b),c);

int mid = a + b + c - maximum - minimum;

cout<<minimum<<'\n'<<mid<<'\n'<<maximum<<'\n';
cout<<endl;
cout<<a<<'\n'<<b<<'\n'<<c<<'\n';

return 0;
}
