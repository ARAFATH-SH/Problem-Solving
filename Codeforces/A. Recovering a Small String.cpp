#include<bits/stdc++.h>
using namespace std;

void solve(int x){
	int n; cin>>n;
	for(int i = 1; i<=26; i++){
		for(int j=1; j<=26; j++){
			for(int k=1; k<=26; k++){
				if(i+j+k==n){
					cout<<(char)('a'+i-1);
					cout<<(char)('a'+j-1);
					cout<<(char)('a'+k-1);
					cout<<endl;
					return;					
				}
			}
		}
	}
}

int main(){
int t; cin>>t;
for(int i=0; i<t; i++){
	solve(i);
}
	return 0;
}

/*
int main(){
int t; cin>>t;
while(t--){
	int n; cin>>n;
	string s = "aaa";
	n = n - 3;
 
	for(int i=2; i>=0; i--){
		int x = min(25,n);
		s[i] = s[i] + x;
		n = n - x;
	}
	cout<<s<<endl;
}
	return 0;
}*/