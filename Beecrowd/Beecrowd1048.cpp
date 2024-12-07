#include<bits/stdc++.h>
using namespace std;

int main(){
    double n, inc,Reajuste_ganho,Novo_salario,Em_percentual ;
    cin>>n;
    if(n>=0 && n<=400.00){
        inc=0.15;
        }
    else if(n>=400.01 && n<=800.00){
            inc=0.12;
        }
    else if(n>=800.01 && n<=1200.00){
            inc=0.10;
        }
    else if(n>=1200.01 && n<=2000.00){
            inc=0.07;
        }    
    else {
            inc=0.04;
        }    
    Reajuste_ganho = n * inc;
    Novo_salario = n + Reajuste_ganho;
    Em_percentual = 100 * inc;

    cout << "Novo salario: " << fixed << setprecision(2) <<Novo_salario<< endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) <<Reajuste_ganho << endl;
    cout << "Em percentual: " << fixed << setprecision(0) <<Em_percentual << " %" << endl;

    return 0;
        }
