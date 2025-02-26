#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	string s; cin>>s;
	int score = 0;
	for (int i=0; i<s.size(); i++)
	{
		if(s[i]=='V'){
			score+=5;
		}
		else if(s[i]=='W'){
			score+=2;
		}
		else if(s[i]=='X'){
			if (i!=s.size()- 1)
            {
                i++;
            }
		}
		else if(s[i]=='Y'){
			 if (i!=s.size()-1)
            {
                s.push_back(s[i + 1]);
                i++;
            }
		}
		else if(s[i]=='Z'){
			if (i!=s.size()-1)
            {
                if (s[i+1]=='V')
                {
                    score/=5;
                    i++;
                }
                else if (s[i+1]=='W')
                {
                    score /= 2;
                    i++;
                }
            }
		}
	}
	cout<<score<<'\n';
	return 0;
}