#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long x,y;
	cin>>x>>y;
	long long mini = min(x,y);
	long long maxi = max(x,y);

	long long maximumSum = maxi*(maxi+1)/2;
	long long minimumSum = mini * (mini+1) / 2;

	long long Sum = 0;

	Sum = (maximumSum - minimumSum) + mini;

	if(mini%2!=0){
		mini+=1;
	}
	if(maxi%2!=0){
		maxi-=1;
	}

	long long maximumEvenSum = maxi/2 * (maxi/2+1);
	long long minimumEvenSum = mini/2 * (mini/2+1);
	long long Even=(maximumEvenSum - minimumEvenSum) + mini;

	cout<<Sum<<'\n';
	cout<<Even<<'\n';
	cout<<Sum - Even<<'\n';
	
	return 0;
}