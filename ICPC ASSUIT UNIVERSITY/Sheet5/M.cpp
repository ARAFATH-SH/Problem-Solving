#include<bits/stdc++.h>
using namespace std;

void distinctNumber(int a[], int n){
	set<int>s;

	for(int i=0; i<n; i++){
		s.insert(a[i]);
	}
	
	cout<<s.size();
}

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

	distinctNumber(a,n);

	return 0;
}