#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int r,l,w,t=1;
	double s;
	while(cin>>r){
		if(r==0) break;
		cin>>l>>w;
		s = sqrt(l*l + w*w);
		if(r>=(s/2.0)){
			cout<<"Pizza "<<t<< " fits on the table."<<endl;
		}
		else{
			cout<<"Pizza "<<t<< " does not fit on the table."<<endl;
		}
		t++;
	}
	return 0;
}