#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n,h;
	cin>>n>>h;
	int count1 = 0;
	int count2 = 0;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]<=h){
			count1++;
		}
		else{
			count2+=2;
		}
	}
	cout<<count1+count2<<endl;
	return 0;
}