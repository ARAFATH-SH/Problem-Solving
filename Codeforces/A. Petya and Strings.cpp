#include<bits/stdc++.h>
using namespace std;

int main(){
	string f1,f2;
	cin>>f1>>f2;
	
	for(int i = 0; i<f1.size(); i++){
	
			f1[i] = tolower(f1[i]);
			f2[i] = tolower(f2[i]);
	}
	
	if(f1==f2){
		cout<<0;
		}
	else{
		for(int i=0; i<f1.size(); i++){
		if(f1[i]>f2[i]){
			cout<<1;
			break;
		}
		if(f1[i]<f2[i]){
			cout<<"-1";
			break;
		} 
	}
	}
	return 0;
}