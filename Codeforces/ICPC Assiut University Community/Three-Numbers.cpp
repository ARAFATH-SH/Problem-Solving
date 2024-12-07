#include<iostream>
using namespace std;

int main(){
int k,s; cin>>k>>s;

int cont = 0;

for(int x = 0; x<=k; x++){
    for(int y=0; y<=k; y++){

        int z = s - x - y;
        if(z>=0 && z<=k){
            cont++;
        }

    }
}
    cout<<cont<<endl;

return 0;
}
