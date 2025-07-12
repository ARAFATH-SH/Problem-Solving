#include<bits/stdc++.h>
using namespace std;

void PrintDigits(int x){
	if(x==0){
		return ;
	}
	PrintDigits(x/10);
	cout<< (x%10)<<' ';

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
			PrintDigits(x);
		}
		cout<<'\n';
	}

	return 0;
}