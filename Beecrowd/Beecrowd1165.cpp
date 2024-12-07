#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int count = 0;
		for(int i =2; i<n; i++){
			if(n%i==0){
				count++;
			}
		}
		if(count==0){
			cout<<n<<" eh primo\n";
		}
		else{
			cout<<n<<" nao eh primo\n";
		}
	}
	return 0;
}