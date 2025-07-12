#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	set<int>s;
	int n; cin>>n;
	
	while(n--){
		int x,y; cin>>x>>y;
		
		if(x==1){
			s.insert(y);
		} 
		else if(x==2) {
			s.erase(y);
		}
		else {
			auto it = s.find(y);
			if(it != s.end()){
				cout<<"Yes\n";
			} 
			else cout<<"No\n";
		}
	}
	
	return 0;
}