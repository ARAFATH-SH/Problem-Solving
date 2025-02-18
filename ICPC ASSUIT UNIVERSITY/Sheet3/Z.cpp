#include<bits/stdc++.h>
using namespace std;
 
int is_binary_search(int v[],int start,int end,int value){
	
	while(start<=end){
		int mid = start + (end-start)/2;
		if(v[mid]==value){
			return mid;
		}
		else if(v[mid]<value){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		
	}
	return -1;
}
 
int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,q; cin>>n>>q;
	int v[n];
 
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	sort(v,v+n);
 
	while(q--){
		int value; cin>>value;
		int search = is_binary_search(v,0,n-1,value);
		if(search==-1){
			cout<<"not found\n";
		}
		else cout<<"found\n";
	}
 
	return 0;
}