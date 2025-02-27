#include<bits/stdc++.h>
using namespace std;

string binary_representation(int n){
	string binary = "";
	while(n){
		binary+=(n%2)+'0';
		n/=2;
	}
	reverse(binary.begin(),binary.end());
	return binary;
}

bool is_palindrome(string binary){
	int n = binary.size();

	for(int i=0, j=n-1; i<j; i++,j--){
		if (binary[i]!=binary[j])
		{
			return false;
		}
	}
	return true;

}
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin>>n;

	if(n%2!=0){
		string binary = binary_representation(n);
		if(is_palindrome(binary)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}

	else cout<<"NO\n";


	return 0;
}
