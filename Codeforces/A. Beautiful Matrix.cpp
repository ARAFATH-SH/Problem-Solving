#include<bits/stdc++.h>
using namespace std;

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int step = 0;
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cin>>step;
			if(step==1){
				cout<< abs(i-3) + abs(j-3);
			}
		}
	}
	return 0;
}