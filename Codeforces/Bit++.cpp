#include<bits/stdc++.h>
using namespace std;

int main(){

int n; cin>>n;
int positive = 0 , negative = 0;

while(n--){
    string str;
    cin>>str;

    if(str=="++X"||str=="X++"){
        positive++;
    }
    else{
        negative++;
    }
}

cout<<positive-negative<<endl;

return 0;

}
