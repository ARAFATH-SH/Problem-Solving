#include<bits\stdc++.h>
using namespace std;
 
int main(){
    string s1,s2; cin>>s1>>s2;
 
    cout<<s1.size()<<' '<<s2.size()<<'\n';
    cout<<s1<<s2<<'\n';
    swap(s1[0],s2[0]);
    cout<<s1<<' '<<s2;
}