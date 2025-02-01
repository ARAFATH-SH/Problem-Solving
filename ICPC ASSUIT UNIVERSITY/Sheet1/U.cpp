#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double n; cin>>n;
	int x = n;
	double diff = n-x;

	if(diff==0){
		cout<<"int "<<(int)n<<'\n';
	}
	else{
		cout<<"float "<<(int)n<<' ';
		cout<< n-(int)n;
	}
	
	return 0;
}