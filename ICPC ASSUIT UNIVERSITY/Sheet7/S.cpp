#include<bits/stdc++.h>
using namespace std;

int n;
double a[100];

double avg(int index, double res){
	if(index==n){
		return res/n;
	}
	return avg(index+1,res+a[index]);
}

int32_t main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<fixed<<setprecision(6)<<avg(0,0);
}