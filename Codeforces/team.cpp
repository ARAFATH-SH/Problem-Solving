#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int solve = 0;
	while(n--){
		int a[3]; 
		for(int i=0; i<3; i++){
			cin>>a[i];
		}
		int cont = 0;
		for(int i=0; i<3; i++){
			if(a[i]==1) cont++;
		}
		if (cont>=2)
		{
			solve++;
			continue;
		}
	}
	cout<<solve<<'\n';
	return 0;
}