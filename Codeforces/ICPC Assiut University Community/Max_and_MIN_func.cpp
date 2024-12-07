#include<iostream>
using namespace std;

const int N = 1000;
int a[N+1];

int n;

int get_maximum(){

int maximum = -1;

for(int i=1; i<=n; i++){

    maximum = max(maximum,a[i]);
}
return maximum;
}

int get_minimum(){
    int minimum = 1000000;

    for(int i=1; i<=n; i++){
        minimum = min(minimum,a[i]);
    }
    return minimum;
}


int main(){

 cin>>n;

for(int i=1; i<=n; i++){
    cin>>a[i];
}

cout<< get_minimum() << ' '<<get_maximum()<<' ';


return 0;
}
