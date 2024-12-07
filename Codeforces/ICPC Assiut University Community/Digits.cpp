#include<iostream>
using namespace std;

int main(){

int t; cin>>t;

    for(int i=1; i<=t; i++){

        int digit; cin>>digit;

        if(digit == 0){
            cout<< 0 <<endl;
            continue;
        }
    int last_digit=0;

        while(digit>0){

            last_digit = digit%10;
            cout<< last_digit<<' ';

            int number_without_last_digit = digit/10;
            digit = number_without_last_digit;

        }

            cout<<endl;

    }

    return 0;
}
