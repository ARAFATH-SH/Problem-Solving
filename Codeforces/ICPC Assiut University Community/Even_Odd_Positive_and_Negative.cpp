#include<iostream>

using namespace std;

int main(){

int n; cin>>n;

int even_num=0;
int odd_num=0;
int positive_num=0;
int negative_num=0;

for(int i=1; i<=n; i++){

    int x; cin>>x;

    if(abs(x)%2==0){
        even_num++;
    }
    if(abs(x)%2==1){
        odd_num++;
    }
    if(x>0){
        positive_num++;
    }
    if(x<0){
        negative_num++;
    }

}
cout<<"Even: "<<even_num<<endl;
cout<<"Odd: "<<odd_num<<endl;
cout<<"Positive: "<<positive_num<<endl;
cout<<"Negative: "<<negative_num<<endl;

return 0;
}
