#include<iostream>
using namespace std;

int is_palindrome(int number){

    if(number<0 ){
        return false;
    }


    int reverse_number = 0;
    int orginal_number = number;
    while(number>0){

        int digit = number % 10;
        reverse_number = reverse_number * 10 + digit;
        int number_without_last_digit = number/=10;
        number = number_without_last_digit;

    }

    return reverse_number;
}

int main(){

int number;
cin>>number;
is_palindrome(number);

if(is_palindrome(number) == number && number!=0){
    cout<<"true";
}
else cout<<"false";

return 0;
}
