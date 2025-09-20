#include<bits/stdc++.h>
using namespace std;

int get_return_of_apple(deque<pair<int,int>>left, deque<pair<int,int>>right){
	int apples = 0;
	while(true){
		if(left.empty()) break;
		apples+=left[0].second;
		left.pop_front();

		if(right.empty()) break;
		apples+=right[0].second;
		right.pop_front();
	}
	return apples;
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;

	deque<pair<int,int>>left,right;
	int positions,apples;
	for(int i=1; i<=n; i++){
		cin>>positions>>apples;
		if(positions<0){
			left.push_back({-positions,apples});
		}
		else{
			right.push_back({positions,apples});
		}
	}

	sort(left.begin(),left.end());
	sort(right.begin(),right.end());

	int total_apples = get_return_of_apple(left,right);

	int max_apples = max(get_return_of_apple(right,left),total_apples);

	cout<<max_apples<<'\n';
	
	return 0;
}