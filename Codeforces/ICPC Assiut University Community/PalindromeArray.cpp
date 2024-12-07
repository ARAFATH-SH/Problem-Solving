#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

const int N = 1e5 + 9;
int a[N],n;

bool is_palindorme(int x, int y){

	if(x>y){
		return true;
	}

	if(a[x]!=a[y]){
		return false;
	}

	return is_palindorme(x+1 , y-1);

}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	if(is_palindorme(1,n)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}