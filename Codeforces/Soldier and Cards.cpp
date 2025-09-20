#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 7;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	deque<int>a,b;
	int k; cin>>k;

	while(k--){
		int x; cin>>x;
		a.push_back(x);
	}

	cin>>k;
	while(k--){
		int x; cin>>x;
		b.push_back(x);
	}

	int fights =0, who_won=-1;

	while(fights<MAX){

		if(a.empty()){
			who_won = 2;
			break;
		}
		if(b.empty()){
			who_won =  1;
			break;
		}

		int a_top = a[0], b_top = b[0];
		a.pop_front();
		b.pop_front();
		if(a_top > b_top){
			a.push_back(b_top);
			a.push_back(a_top);
		}
		else{
			b.push_back(a_top);
			b.push_back(b_top);
		}
		fights++;
	}

	if(who_won == -1){
		cout<<-1<<'\n';
	}
	else{
		cout<<fights<<' '<<who_won<<'\n';
	}

	return 0;
}