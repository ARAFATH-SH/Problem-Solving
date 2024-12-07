#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(n){
        int last_digit = n%10;
        sum+=last_digit;
        n/=10;
    }
    printf("%d\n",sum);
    return 0;
}
