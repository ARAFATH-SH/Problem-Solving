#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	while(1){
	cin>>x>>y;
	if(x<=0 || y<=0){
		break;
	}
	int mini = min(x,y);
	int maxi = max(x,y);
	int sum = 0;
	if(mini>0){
		for(int i = mini; i<=maxi; i++){
			cout<<i<<' ';
			sum+=i;
		}
		cout<<"Sum="<<sum<<endl;
		}
	}
	
	return 0;
}