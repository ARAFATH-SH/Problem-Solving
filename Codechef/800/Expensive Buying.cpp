#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	std::cin >> t;
	
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int>a(n);
	    for(int i=0; i<n; i++) cin>>a[i];
	    
	    sort(a.begin(), a.end());
	    
	    int back = a.size() -1;
	    int price = 0;
	    for(int i=0; i<k; i++){
	        price+=a[back];
	        back--;
	    }
	    cout<<price<<'\n';
	}

}
