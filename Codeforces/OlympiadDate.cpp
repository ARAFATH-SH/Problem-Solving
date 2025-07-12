#include<bits/stdc++.h>
using namespace std;

//next_permutaion();	//find next permutaion
//prev_permutaion();	//find previous permutaion	
//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 int t; cin>>t;
	 while(t--){
	 	int n; cin>>n;
	 	int a[n];
	 	for(int i=0; i<n; i++){
	 		cin>>a[i];
	 	}
	 	int c2 = 0,c0=0,c1=0,c3=0,c5=0;
	 	int index = 0;

	 	for(int i=0; i<n; i++){
	 		if(a[i]==2){
	 			c2++;
	 		}
	 		else if(a[i]==1){
	 			c1++;
	 		}
	 		else if(a[i]==3){
	 			c3++;
	 		}
	 		else if(a[i]==5){
	 			c5++;
	 		}
	 		else if(a[i]==0){
	 			c0++;
	 		}

	 		if(c0>=3 && c1>=1 && c2>=2 && c3>=1 && c5>=1){
	 			index = i+1;
	 			break;
	 		}

	 	}
	 	if(index) cout<<index<<'\n';
	 	else cout<<0<<'\n';
	 }
	return 0;
}