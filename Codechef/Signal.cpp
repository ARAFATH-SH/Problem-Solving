#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	   
	    int cnt_pulse = 0;
	    for(int i=0; i<n; i++){
	        if(s[i] == '0'){
	            for(int j=i+1; j<n; j++){
	                if(s[j]=='1') cnt_pulse++;
	            }
	            break;
	        }
	    }
	    
	    cout<<cnt_pulse<<'\n';
	}

}
