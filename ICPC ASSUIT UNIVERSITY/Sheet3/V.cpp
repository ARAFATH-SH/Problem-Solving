#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

const int N = 1e5+7;
int a[N],frequency[N]; 

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m,n;
	cin>>m>>n;

	for(int i=1; i<=m; i++){
		cin>>a[i];
	}

	memset(frequency,0,sizeof(frequency));

	for(int i=1; i<=m; i++){
		frequency[a[i]]++;
	}

	for(int i=1; i<=n; i++){
		cout<<frequency[i]<<'\n';
	}

	return 0;
}