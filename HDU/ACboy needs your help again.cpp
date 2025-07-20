#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin>>t;

	while(t--){
		int operations; string s;
		cin>>operations>>s;
		if(s=="FIFO"){
			queue<int>q;
			string ss;
			while(operations--){
				cin>>ss;
				if(ss=="IN"){
					int x; cin>>x;
					q.push(x);
				}
				else {
					if(q.empty()){
						cout<<"None\n";
					}
					else {
						cout<<q.front()<<'\n';
						q.pop();
					}
				}
			}

		}
		else{
			stack<int>s;
			string ss;
			while(operations--){
				cin>>ss;
				if(ss=="IN"){
					int x; cin>>x;
					s.push(x);
				}
				else {
					if(s.empty()){
						cout<<"None\n";
					}
					else {
						cout<<s.top()<<'\n';
						s.pop();
					}
				}
			}

		}
	}
	
	return 0;
}