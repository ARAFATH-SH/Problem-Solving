#include<iostream>
using namespace std;

bool is_lucky_digit(int digit){

return digit == 4 or digit==7;

}

bool is_lucky_number(int n){

    while(n>0){

    int last_digit = n%10;
    if(!is_lucky_digit(last_digit)){

        return false;

    }

    int number_without_last_digit = n / 10;

    n = number_without_last_digit;

        }
        return true;
    }


int main(){

    int a,b; cin>> a >> b;
    bool got_lucky_number = false;

    for(int i = a; i<=b; i++){

        if(is_lucky_number(i)){

            cout<< i << ' ';

            got_lucky_number = true;

        }

    }

    if(!got_lucky_number){

        cout<< -1 << endl;

    }

    return 0;
}
