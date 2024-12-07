#include<bits/stdc++.h>
using namespace std;

int cube(int x){
	return x*x*x;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int orginal_number = n;

		int last_digit = n%10;
		n = n/10;
		int middile_digit = n%10;
		int first_digit = n/10;

		int sum = cube(first_digit) + cube(middile_digit) + cube(last_digit);
		if(sum == orginal_number){
			cout<<orginal_number<<" is an armstrong number!"<<endl;
		}
		else{
			cout<<orginal_number<<" is not an armstrong number!"<<endl;
		}

		/*cout<<first_digit<<' '<<middile_digit<<' '<<last_digit;*/
	}
	return 0;
}