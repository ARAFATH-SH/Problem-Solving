#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[1000];
	cin>>a;
	int len = strlen(a);
	int digit_sum = 0;
	for(int i=0; i<len; i++){

		digit_sum += a[i] - '0';

	}
	cout<<digit_sum;

return 0;
}