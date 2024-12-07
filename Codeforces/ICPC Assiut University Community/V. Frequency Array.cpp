#include<bits/stdc++.h>
using namespace std;

int main(){
	int M,N;
	cin>>M>>N;
	
	int array[M+1];
	for(int i=1; i<=M; i++){
		cin >> array[i];
	}

	int frequency[N+1];
	for(int i=1; i<=N; i++){
		frequency[i] = 0;
	}

	for(int i=1; i<=M; i++){
		frequency[array[i]]++;
	}

	for(int i=1; i<=N; i++){
		cout<<frequency[i]<<endl;
	}

	return 0;
}