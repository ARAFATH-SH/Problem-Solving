#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int count = 0;
		if(n!=2){
			for(int i=1; i<=n; i+=2){
			count++;
		}
		cout<<count<<' '<<count-1<<endl;
		}
		else cout<< "1 1"<<endl;
		
	}
	return 0;
}