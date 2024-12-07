#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 


const int N = 50000009;
int prime[N];

bool is_prime(int a){
	for(int i=2; i<a; i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}

bool is_palindorme(int b){
	int temp = b;
	int reverse = 0;
	while(b>0){
		int last_digit = b%10;
		reverse = reverse * 10 + last_digit;
		b/=10;
	}
	if(temp == b){
		return true;
	}
	return false;
}

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int x,y;
	cin>>x>>y;
	for(int i=x; i<=y; i++){
		prime[i] = is_prime(i);
		if(prime[i]){
			if(is_palindorme(i)){
				cout<<i<<endl;
			}
		}


	}
	return 0;
}

