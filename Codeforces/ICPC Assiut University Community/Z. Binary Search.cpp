#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[m];
	for(int i=0; i<m; i++){
		cin>>a[i];
	}
	sort(a,a+m);
	while(n--){
		int x; cin>>x;

		bool is_found = false;

		for(int i=0; i<m; i++){
			if(a[i]==x){
				is_found = true;
				break;
			}
		}
		if(is_found){
			cout<<"found\n";
		}
		else cout<<"not found\n";
		
	}
	return 0;
}