#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;

	int array_a[a];
	for(int i=0; i<a; i++){
		cin>>array_a[i];
	}

	int array_b[b];
	for(int i=0; i<b; i++){
		cin>>array_b[i];
	}

	int current_index_in_a = 0;

	for(int i = 0; i<b; i++){
		bool element_found = false;

		while(current_index_in_a<a){
			if(array_a[current_index_in_a] == array_b[i]){
				element_found = true;
				current_index_in_a++;
				break;
			}
			else{
				current_index_in_a++;
			}
		}
		if(!element_found){
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}