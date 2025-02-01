#include<bits/stdc++.h>
using namespace std;

bool is_lucky(int x){
	while(x){
		int last_digit = x%10;
		if(last_digit!=4 && last_digit!=7){
			return false;
		}
		x/=10;
	}
	return true;
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b; cin>>a>>b;
	int cont = 0;
	for(int i=a; i<=b; i++){
		if(is_lucky(i)){
			cout<<i<<' ';
			cont++;
		}
	}
	if(cont==0){
		cout<<-1<<'\n';
	}
	return 0;
}