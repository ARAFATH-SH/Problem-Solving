#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

bool is_prime(int x){
	if(x==0 || x==1){
		return false;
	}
	for(int i=2; i<x; i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

bool is_super_prime(int y){
	int last_digit = 0;
	while(y>0){
		last_digit = y%10;
		if(!is_prime(last_digit)){
			return false;
		}
		y/=10;
	}
	return true;
}


int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	
	int n;

	while(cin>>n){
		if(!is_prime(n)){
			cout<<"Nada"<<endl;
		}
		else{
			if(is_super_prime(n)){
				cout<<"Super"<<endl;
			}
			else{
				cout<<"Primo\n";
			}
		}
	}
return 0;
	}
	