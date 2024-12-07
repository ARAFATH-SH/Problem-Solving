#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int size, range;
	cin>>size>>range;
	long long int a1[size];
	long long int a2[size];

	for(int i=0; i<size; i++){
		cin>>a1[i];
		if(i==0){
			a2[i]=a1[i];
		}
		else{
			a2[i] = a1[i] + a2[i-1]; 
		}
	}

	while(range--){
		long long int start,end;
		cin>>start>>end;
		start--;
		end--;

		long long sum = a2[end] - a2[start] + a1[start];

		cout<<sum<<endl; 

	}

	return 0;
}
