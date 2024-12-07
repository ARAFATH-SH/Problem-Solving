#include<bits/stdc++.h>
using namespace std;

int main(){
    /*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n; cin>>n;
	int watched[n+1];
	for(int i=1; i<=n; i++){
		watched[i] = false;
	}
	for(int i=1; i<n; i++){
		int episode; cin>>episode;
		watched[episode] = true;
	}
	int not_watched = -1;
	for(int i=1; i<=n; i++){
		if(!watched[i]){
			not_watched = i;
		}
	}
	cout<<not_watched<<endl;
	return 0;
}
