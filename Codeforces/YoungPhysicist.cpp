#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;

	int a[n][3];
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			cin>>a[i][j];
		}
	}

	int isequilibrium = 0;
	int sum1 =0,sum2=0,sum3=0;

	for(int i=0; i<n; i++){
		sum1+=a[i][0];
		sum2+=a[i][1];
		sum3+=a[i][2];
	}

	// cout<<sum1<<' '<<sum2<<' '<<sum3;

	if(sum1==0 && sum2==0 && sum3==0){
		cout<<"YES\n";
	}
	else cout<<"NO\n";

	return 0;
}
