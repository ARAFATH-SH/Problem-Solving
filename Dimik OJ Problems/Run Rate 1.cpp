#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int target, recent_runs, balls_to_play;
		cin>>target>>recent_runs>>balls_to_play;

		int balls_played = 300 - balls_to_play;

		double current_runrate = (double)recent_runs / balls_played * 6;
		double required_runrate;
		if(recent_runs<=target){
			int runs_to_need = target + 1 - recent_runs;
			required_runrate = (double)runs_to_need / balls_to_play * 6;
		}
	else {
		required_runrate = 0;
		}
	cout<<fixed<<setprecision(2)<<current_runrate<<' '<<required_runrate<<endl;
	}
	return 0;
}				