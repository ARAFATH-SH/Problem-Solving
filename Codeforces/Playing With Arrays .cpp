#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int n; cin>>n;
		deque<int> A,R;

		for(int i=1; i<=n; i++){
			R.push_back(i);
		}

		for(int i=n; i>=1; i--){

			if(!A.empty()){
				int last_element = A.back();
				A.pop_back();
				A.push_front(last_element);
			}

			int last_element = R.back();
			R.pop_back();
			A.push_front(last_element);
		}

		for(int i=0; i<n; i++){
			cout<<A[i];
			if(i < n-1) cout<<' ';
		}
		cout<<'\n';

	}
	
	return 0;
}