#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	vector<int>v;
	long long ans = 0;
	for(int i=0; i<n; i++){
		int duration,deadline; cin>>duration>>deadline;
		v.push_back(duration);
		ans+=deadline;
	}

	long long final_duration=0;
	sort(v.begin(),v.end());

	for(auto duration:v){
		final_duration+=duration;
		ans-=final_duration;
	}

	cout<<ans<<'\n';
	
	return 0;
}