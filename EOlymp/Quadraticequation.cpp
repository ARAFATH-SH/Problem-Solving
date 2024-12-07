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

	int d = ((b*b) - 4*a*c);

	if(d<0){
		cout<<"No roots";
	}
	else if(d==0){
		cout<<"One root: "<< ((-1*b)/(2*a));
	}
	else{
		int x = sqrt(d);
		cout<<"Two roots: "<<min( ((-1*b)+x)/(2*a) ,((-1*b)-x)/(2*a))
		<<" "<<max( ((-1*b)+x)/(2*a) ,((-1*b)-x)/(2*a));
	}

	return 0;
}