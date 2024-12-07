#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	int maxi = max(x,y);
	int mini = min(x,y);
	int sum = 0;
	for(int i = mini+1; i<maxi; i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	cout<<sum<<endl;


	return 0;
}