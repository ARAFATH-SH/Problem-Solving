#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	while(1){
		cin>>a>>b>>c;
		if((a==0) && (b==0) && (c==0)){
			break;
		}
		int diff_1 = b-a, diff_2 = c-b;
		if(diff_1==diff_2){
			cout<<"AP "<< c+diff_2<<'\n';
		}
		else{
			cout<<"GP "<<c*(b/a)<<'\n';
		}
	}
	return 0;
}