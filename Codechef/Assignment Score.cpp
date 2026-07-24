#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	
	ll t; cin>>t;
	
	while(t--){
	    ll a; cin>>a;
	    vector<ll>marks(a);
	    
	    for(ll i=0; i<a; i++){
	        cin>>marks[i];
	    }
	    
	    ll all_sub_marks = (a+1) * 100;
	    ll total_marks_to_pass = 0.5 * all_sub_marks;
	    ll get_total_marks = accumulate(marks.begin(), marks.end(), 0);
	    ll need_marks_to_pass = total_marks_to_pass - get_total_marks;
	    
	    if(need_marks_to_pass>100) cout<<-1<<'\n';
	    else if(need_marks_to_pass>0 and need_marks_to_pass<=total_marks_to_pass) cout<<need_marks_to_pass<<'\n';
	    else cout<<0<<'\n';
	    
	}

}
