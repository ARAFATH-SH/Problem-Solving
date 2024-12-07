#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int eye, mouth , body;
	cin>>eye>>mouth>>body;
	long long int minimum = 0;
	if(eye==0 || body==0){
		cout<<"0"<<endl;
	}
	else{
		if(mouth>=eye && mouth>=body || mouth>=eye && mouth<body || mouth<eye && mouth>=body){
			minimum = min(eye,body);
			cout<<minimum<<endl;
		}

		else if(mouth<body && mouth<eye){
			minimum = mouth;
			eye = eye - mouth;
			body = body - mouth;
			minimum = minimum + min(eye/2,body);
			cout<<minimum<<endl;
		}

	} 
	return 0;
}