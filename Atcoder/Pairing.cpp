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
	int a,b,c,d,cont=0;
	cin>>a>>b>>c>>d;

		if(a<b){
			int temp = a;
			a=b;
			b=temp;
		}
		if(a<c){
			int temp = a;
			a=c;
			c=temp;
		}
		if(a<d){
			int temp = a;
			a=d;
			d=temp;
		}
		if(b<c){
			int temp = b;
			b=c;
			c=temp;
		}
		if(b<d){
			int temp = b;
			b=d;
			d=temp;
		}
		if(c<d){
			int temp = c;
			c=d;
			d=temp;
		}
		if(a==b){
			cont++;
			b++;
		}
		if(b==c){
			cont++;
			c++;
		}
		if (c==d){
			cont++;
		}

		cout<<cont<<'\n';

	return 0;
}