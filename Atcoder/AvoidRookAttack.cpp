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
	string s1,s2,s3,s4,s5,s6,s7,s8;
	cin>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8;
	int cont1 = 0;
	for(int i=0; i<8; i++){
		if(s1[i]=='.'&&s2[i]=='.'&&s3[i]=='.'&&s4[i]=='.'&&s5[i]=='.'&&s6[i]=='.'&&s7[i]=='.'&&s8[i]=='.'){
			cont1++;
		}
	}
	int cont2=0;
	if(s1=="........") cont2++;
	if(s2=="........") cont2++;
	if(s3=="........") cont2++;
	if(s4=="........") cont2++;
	if(s5=="........") cont2++;
	if(s6=="........") cont2++;
	if(s7=="........") cont2++;
	if(s8=="........") cont2++;
	cout<<cont1*cont2<<'\n';
	return 0;
}