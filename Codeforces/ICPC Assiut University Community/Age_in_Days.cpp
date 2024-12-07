#include<iostream>
using namespace std;

int main(){
int n; cin>>n;

int years = n/365;
int months = (n - years*365)/30;
int days = (n - years*365)%30;

cout<<years<<" years"<<endl;
cout<<months<<" months"<<endl;
cout<<days<<" days\n";

return 0;
}
