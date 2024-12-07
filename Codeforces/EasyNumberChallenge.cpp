#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
const int N = 1e6+7;
int d[N];
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int i=1; i<N; i++){
		for(int j=i; j<N; j+=i){
			d[j]++;
		}
	}
	int a,b,c;
	cin>>a>>b>>c;
	int sum = 0;
	for(int i=1; i<=a; i++){
		for(int j=1; j<=b; j++){
			for(int k=1; k<=c; k++){
				sum+=d[i*j*k];
			}
		}
	}
	cout<<sum<<'\n';
	return 0;
}