#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n,l,r,x;
	cin>>n>>l>>r>>x;
	int c[n];
	for(int i=0; i<n; i++){
		cin>>c[i];
	}
	int ways =0;
	for(int mask = 0; mask < (1<<n); mask++){
		int total_difficulty = 0, minimum_difficulty = 1e9, maximum_difficuly = 0, count = 0;
		//cout<<"mask = "<<mask<<endl;
		for(int i=0; i<n; i++){
			if((mask>>i)&1){
				total_difficulty += c[i];
				minimum_difficulty = min(minimum_difficulty, c[i]);
				maximum_difficuly = max(maximum_difficuly, c[i]);
				count++;
				//cout<<total_difficulty<<endl;
			}
		}
		if(total_difficulty >= l and total_difficulty <= r 
			and maximum_difficuly - minimum_difficulty >= x and count >= 2){
			ways++;
		}
	}
	cout<<ways<<'\n';
	return 0;
}