#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin>>s;
	string split1="",split2="",merge="";
	string temp = s,smallest = s;
	for(int i=0; i<s.size()-1; i++){
		split1+=s[i];
		temp.erase(0,1);
		split2=temp;
		sort(split1.begin(),split1.end());
		sort(split2.begin(),split2.end());
		merge = split1+split2;
		smallest = min(smallest,merge);
	}
	cout<<smallest;

	return 0;
}