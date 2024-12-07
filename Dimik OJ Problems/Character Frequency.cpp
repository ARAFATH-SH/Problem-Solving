#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[10100];
		cin.getline(s, 10100);
		char x;
		cin>>x;
		cin.ignore();
		int len = strlen(s);
		int count = 0;

		for(int i = 0; i<len; i++){
			if(s[i]==x){
				count++;
			}
		}
		if (count == 0) {
      		cout << "'" << x << "' is not present\n";
   		 }
   		 else {
    	  cout << "Occurrence of '" << x << "' in '" << s << "' = " << count << '\n';
    	}
 	 }
	return 0;
}