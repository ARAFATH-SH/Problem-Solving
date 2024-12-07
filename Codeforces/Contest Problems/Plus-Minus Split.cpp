#include<bits/stdc++.h>
using namespace std;

int main(){

int t; cin>>t;

while(t--){

    int n; cin>>n;

    string str; cin>>str;
    int addition = 0;
    int substraction = 0;

    for(int i = 0; i<n; i++){
        if(str[i]=='+'){
            addition++;
        }
        else{
            substraction++;
        }
    }

    cout<<abs(addition-substraction)<<endl;

}

return 0;
}
