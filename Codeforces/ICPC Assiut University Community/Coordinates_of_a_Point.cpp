#include<iostream>
using namespace std;

int main(){
float x,y; cin>>x>>y;

if (x == 0 and y == 0) cout << "Origem\n";

else if (y == 0 and (x > 0 or x < 0)) cout << "Eixo X\n";

else if (x == 0 and (y > 0 or y < 0)) cout << "Eixo Y\n";

else if(x>0 && y>0) cout<<"Q1";

else if(x<0 && y>0) cout<<"Q2";

else if(x<0 && y<0) cout<<"Q3";

else cout<<"Q4";


return 0;
}
