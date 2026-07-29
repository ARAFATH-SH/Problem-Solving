#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n; cin>>n;
    
    int last_digit = n%10;
    int first_digit = n/10;
    
    if(last_digit!=first_digit) cout<<"Yes\n";
    else cout<<"No\n";
}
