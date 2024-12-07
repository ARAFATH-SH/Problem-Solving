#include<bits/stdc++.h>
using namespace std;

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int odd_number = 0;
	for(int i=0; i<n; i++){
		if(a[i]%2==1){
			odd_number = a[i];
			break;
		}
	}
	long long sum = 0;
	for(int i=0; i<n; i++){
		sum+=a[i];
	}
	if(sum%2==1){
		cout<<sum - odd_number<<endl;
	}
	else{
		cout<<sum;
	}
	return 0;
}