#include<bits/stdc++.h>
using namespace std;

void round_number(int n){
	vector<int> ans;
	int power = 1;
	int cont = 0;
	while(n>0){

		if(n%10>0){
			ans.push_back((n%10)*power);
		}
		n/=10;
		power*=10;
	}
	cout<<ans.size()<<'\n';
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<' ';
	}
	cout<<'\n';
	
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		round_number(n);
	}
	return 0;
}