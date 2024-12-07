#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;

	while(scanf("%d",&n) != EOF){
		
	float min = 1e9;
	for(int i=0; i<n; i++){
		float a;
		cin>>a;
		if(a>=9){
			if(min>a){
				min = a;
			}
		}
	}
	cout<<min<<endl;

	}

	return 0;
}