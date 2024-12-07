#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		
		if(y!=0){
			double divisible =(double) x/y;
			cout<<fixed<<setprecision(1)<<divisible<<endl;
		}
		else{
			cout<<"divisao impossivel\n";
		}
	}
	return 0;
}