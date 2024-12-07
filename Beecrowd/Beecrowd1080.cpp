#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	int highest_value = 0;
	int postion = 0;
	for(int i = 1; i<=100; i++){
		cin>>n;
		if(n>highest_value){
			highest_value = n;
			postion = i;
		}
	}
	cout<<highest_value<<endl<<postion<<endl;
	return 0;
}