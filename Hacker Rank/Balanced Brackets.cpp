#include<bits/stdc++.h>
using namespace std;

bool isvalid(char open, char close){
	if(open == '(') return close == ')';
	else if(open == '{') return close == '}';
	else return close == ']';
}

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test_case; cin>>test_case;

	while(test_case--){
		string s; cin>>s;
		stack<char>st;
		bool ok = true;
		for(char c: s){
			if(c=='(' or c=='{' or c=='['){
				st.push(c);
			}
			else {
				if(st.empty()){
					ok = false;
					break;
				}
				else{
					char close = c;
					char open = st.top();	
					st.pop();

					if(!isvalid(open,close)){
						ok = false;
						break;
					}

				}
			}
		}
		if(!st.empty()){
			ok = false;
		}
		if(ok){
			cout<<"YES\n";
		}
		else {
			cout<<"NO\n";
		}

	}
	
	return 0;
}