#include<bits/stdc++.h>
using namespace std;

int main(){

int n; cin>>n;

while(n--){

   char x[101];
   cin>>x;
   int lengthx = strlen(x);

   if(lengthx>10){
       cout<<x[0]<<lengthx-2<<x[lengthx-1]<<endl;
        }
   else cout<<x<<endl;

    }

return 0;
}
