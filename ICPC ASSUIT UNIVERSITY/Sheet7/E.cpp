#include<bits/stdc++.h>
using namespace std;

void PrintBinaryConversion(int x){
	if(x==0){
		return ;
	}
	PrintBinaryConversion(x/2);
	cout<< (x%2);

}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;

	while(t--){
		int x; cin>>x;
		if(x==0){
			cout<<0;
		}
		else{
			PrintBinaryConversion(x);
		}
		cout<<'\n';
	}

	return 0;
}