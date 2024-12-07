#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int ways = 0;

void go(int s, int e){

	if(s>e) return;

	if(s==e){
		ways++;
	}

	go(s+1,e);
	go(s+2,e);
	go(s+3,e);
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int s,e;
	cin>>s>>e;
	go(s,e);
	cout<<ways<<'\n';
	return 0;
}