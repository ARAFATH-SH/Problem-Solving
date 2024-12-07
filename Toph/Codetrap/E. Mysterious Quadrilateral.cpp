#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	float x,n;
	cin>>x>>n;
	float D = n;
	float C = D-17;
	float y = (360-D-C)/(3*x);
	float A = x*y;
	cout<<fixed<<setprecision(2)<<360-(A+C+D)<<" Degree"<<endl;
	
	return 0;
}