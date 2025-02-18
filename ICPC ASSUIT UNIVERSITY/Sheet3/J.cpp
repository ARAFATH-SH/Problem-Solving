#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int mini = a[0],cont = 0;
	for(int i=0; i<n; i++){
		if(a[i]<mini){
			cont++;
			mini = a[i];
		}
		else if(a[i]==mini){
			cont++;
		}
	}
	
	if(cont & 1){
		cout<<"Lucky\n";
	}
	else{
		cout<<"Unlucky\n";
	}

	return 0;
}