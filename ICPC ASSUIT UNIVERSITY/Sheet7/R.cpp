#include<bits/stdc++.h>
using namespace std;

int a[100000+7];
int n;
bool isPalindrome(int x){
	if(n == x) return 1;

	return (a[x] == a[n-x-1]) && isPalindrome(x+1);

}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	if(isPalindrome(0)){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
	
	return 0;
}