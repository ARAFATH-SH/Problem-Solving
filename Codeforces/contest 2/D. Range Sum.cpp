#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long L,R;
		cin>>L>>R;
		long long maxi = max(L,R);
		long long mini = min(L,R);
		mini--;
		long long result1 = mini*(mini+1)/2;
		long long result2 = maxi*(maxi+1)/2;
		long long sum = result2 - result1;
		cout<<sum<<endl;
	}
	return 0;
}