#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n; cin>>n;
    
    if(n==0) cout<<20<<'\n';
    else {
        int per_slide = n*30;
        int seconds_left = 600 - per_slide;
        cout << seconds_left/30 <<'\n';
    }
}
