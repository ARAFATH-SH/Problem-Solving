#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	if(n%2!=0){
		for(int i=1; i<=n/2+1; i++){
		int k = n+1-i;
		for(int j=1; j<=n; j++){
			if(i>=j){
				if(j%2==0) cout<<'.';
				else cout<<'#';
			}
			else if(j>k){
				if(j%2==0) cout<<'.';
				else cout<<'#';
			}
			else if(i%2==0) cout<<'.';
			else cout<<'#';
		}
		cout<<'\n';
	}
		for(int i=n/2; i>=1; i--){
			int k = n+1-i;
			for(int j=1; j<=n; j++){
				if(i>=j){
					if(j%2==0) cout<<'.';
					else cout<<'#';
				}
				else if(j>k){
					if(j%2==0) cout<<'.';
					else cout<<'#';
				}
				else if(i%2==0) cout<<'.';
				else cout<<'#';
			}
			cout<<'\n';
		}
	}

	else{
		for(int i=1; i<=n/2; i++){
		int k = n+1-i;
		for(int j=1; j<=n; j++){
			if(i>=j){
				if(j%2==0) cout<<'.';
				else cout<<'#';
			}
			else if(j>k){
				if(j%2==0) cout<<'#';
				else cout<<'.';
			}
			else if(i%2==0) cout<<'.';
			else cout<<'#';
		}
		cout<<'\n';
	}
	for(int i=n/2; i>=1; i--){
		int k = n-i+1;
		for(int j=1; j<=n; j++){
			if(i>=j){
				if(j%2==0) cout<<'.';
				else cout<<'#';
			}
			else if(j>k){
				if(j%2==0) cout<<'#';
				else cout<<'.';
			}
			else if(i%2==0) cout<<'.';
			else cout<<'#';
		}
		cout<<'\n';
	}
	}

	return 0;
}