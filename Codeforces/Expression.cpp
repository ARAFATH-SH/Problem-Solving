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
	cin>>a>>b>>c;
	int value1 = a+b*c;
	int value2 = a*(b+c);
	int value3 = a*b*c;
	int value4 = (a+b)*c;
	int value5 = a+b+c;
	cout<<max(max(max(max(value1,value2),value3),value4),value5)<<'\n';
	return 0;
}