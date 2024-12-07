#include<iostream>
using namespace std;

int get_sum_of_digits(int n){

int sum = 0;

while(n>0){

    int last_digit = n%10;

    sum+=last_digit;

    int number_without_last_digit = n/10;
    n = number_without_last_digit;

}
 return sum;
}
int main(){

int n,a,b; cin>>n>>a>>b;
int sum_of_numbers=0;

    for(int i=1; i<=n; i++){
        int sum_of_digits = get_sum_of_digits(i);

        if(a<=sum_of_digits and sum_of_digits<=b){
            sum_of_numbers+=i;
        }


}
cout<< sum_of_numbers << endl;
return 0;
}
