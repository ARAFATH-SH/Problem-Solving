#include<bits/stdc++.h>
using namespace std;

int digit_sum(int x){
int last_digit = 0;
long long int sum = 0;
while(x>0){
	last_digit = x%10;
	sum+=last_digit;
	x/=10;
}
return sum;
}

int sumn()

int main(){
	int t; cin>>t;
	while(t--){
		long long int n; cin>>n;
		long long int sumn = 0;
		for(int i =1; i<=n; i++){
			sumn = sumn + digit_sum(i);
		}
		cout<<sumn<<endl;
	}
	return 0;
}