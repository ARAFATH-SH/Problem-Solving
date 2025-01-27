#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a[5];
	
	for(int i=0; i<5; i++){
		cin>>a[i];
	}
	int cont = 0;
	if(is_sorted(a,a+5)){
		cout<<"No\n";
		return 0;
	}
	else{
		for(int i=0; i<5-1; i++){
			if(a[i]-a[i+1]>1){
				cout<<"No\n";
				return 0;
			}
			else if(a[i]-a[i+1]==1){
				cont++;
			}
		}
	}
	if(cont==1){
		cout<<"Yes\n";
	}
	else cout<<"No\n";
	return 0;
}