#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	int x = n;
	int flag = 0;
	for(int i = 2; i*i<=n; i++){
		int cont = 0;
			while(n%i==0){
			n/=i;
			cont++;
		}
		if(cont>0 and flag>0){
			cout<<'*';
		}
		if(cont>0){
			cout<<"("<<i<<"^"<<cont<<")";
			flag=1;
		}
		if(n==1){
			break;
		}
	}
	if(n>1 and flag){
		cout<<'*';
	}
	if(n>1){
		cout<<"("<<n<<"^1)";
	}

	return 0;
}