#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	double v,d;
	while(cin>>v>>d){
		double r = d/2;
		double Area = 3.14 * r * r;
		cout<<fixed<<setprecision(2)<<"ALTURA = "<<v/Area<<endl;
		cout<<fixed<<setprecision(2)<<"AREA = "<<Area<<endl;
	}
	return 0;
}