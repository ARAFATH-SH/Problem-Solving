#include<bits/stdc++.h>
using namespace std;
 
int sum_of_digit(int x){
    int sum = 0;
    while(x){
        int last_digit = x%10;
        sum+=last_digit;
        x/=10;
    }
    return sum;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,a,b; cin>>n>>a>>b;
    int final_sum = 0;
    for(int i=1; i<=n; i++){
        int check_sum = sum_of_digit(i);
        if(check_sum>=a && check_sum<=b){
            final_sum+=i;
        }
    }
 
    cout<<final_sum<<'\n';
 
}