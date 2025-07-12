#include<bits/stdc++.h>
using namespace std;

int n,a[22];
bool is_taken[22];

void Subset(int pos){
	cout<<"call :"<<pos<<'\n';
	if(pos>n){
		for(int i=1; i<=n; i++){
			if (is_taken[i])
			{
				cout<<a[i]<<' ';
			}
		}
		cout<<'\n';
		return ;
	}

	cout<<"Top at call :"<<pos<<'\n';
	is_taken[pos] = false;
	Subset(pos+1);
	cout<<"Bottom at call :"<<pos<<'\n';
	is_taken[pos] = true;
	Subset(pos+1);

}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;

	for(int i=1; i<=n; i++){
		cin>>a[i];
	}

	Subset(1);

	return 0;
}