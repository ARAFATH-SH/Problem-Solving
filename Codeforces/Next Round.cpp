#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k,ans=0; cin>>n>>k;
int a[n];

for(int i=0; i<n; i++){
    cin>>a[i];

}

for(int j=0; j<n; j++){

    if(a[j]>=a[k-1] && a[j]!=0){

        ans++;

    }

}

cout<<ans<<endl;

return 0;
}