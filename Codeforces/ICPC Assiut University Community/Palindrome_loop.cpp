#include<iostream>
using namespace std;

int main(){

int number; cin>>number;
int orginal_number = number;

int reversed_number=0;
while(number>0){

    int last_digit = number % 10;

    reversed_number = reversed_number * 10 + last_digit;

    int number_without_last_digit = number / 10;
    number = number_without_last_digit;


}
cout<<reversed_number<<'\n';

if(orginal_number == reversed_number){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}


return 0;
}
