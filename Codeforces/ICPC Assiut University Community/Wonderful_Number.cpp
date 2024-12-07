#include<iostream>
using namespace std;

bool is_odd(int n){

return n % 2 == 1;

}

bool is_palindrome(int n){

if(n==0) return true;

char reversed_binary_form[40];

int bit_count=0;

while(n > 0){

    int last_bit = n%2;

    reversed_binary_form[bit_count] = last_bit;
    bit_count++;

    int drop_last_bit = n/2;
    n = drop_last_bit;

}
char binary_form[40];

for(int i=0, j= bit_count-1; i<bit_count; i++,j-- ){

    binary_form[i] = reversed_binary_form[j];

}

for(int i=0; i< bit_count; i++){

    if(binary_form[i] != reversed_binary_form[i]){
        return false;
    }

}
return true;
}

int main(){

int x; cin>>x;

if(is_odd(x) and is_palindrome(x)){

    cout<< "YES\n";

}

else cout<<"NO\n";

return 0;
}
