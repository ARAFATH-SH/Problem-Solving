#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	while(1){

	cin>>n;

	if(n==0){
		break;
	}
	int a,b;
	int first_player = 0;
	int Second_player = 0;

	for(int i=0; i<n; i++){
		cin>>a>>b;

		if(a>b){
			first_player++;
		}
		else if(b>a){
			Second_player++;
		}

	}
	cout<<first_player<<' '<<Second_player<<endl;

	}
	return 0;
}