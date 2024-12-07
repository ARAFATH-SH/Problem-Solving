#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		double x; 
		cin>>x;
		int food = x;
		int cont = 0;
		while(food>0){

			food = food/2;
			cont++;

		}
		cout<<cont<<" days"<<endl;
	}
	return 0;
}