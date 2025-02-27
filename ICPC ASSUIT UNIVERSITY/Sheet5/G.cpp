#include<bits/stdc++.h>
using namespace std;

void maxmin(vector<int>v, int n){
	int mini = INT_MAX, maxi = INT_MIN;
	for (int i=0; i <n; i++)
	{
		mini = min(mini,v[i]);
		maxi = max(maxi,v[i]);
	}
	cout<<mini<<' '<<maxi<<'\n';
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	maxmin(v,n);
	return 0;
}