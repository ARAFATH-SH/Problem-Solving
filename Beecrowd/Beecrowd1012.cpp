#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	float a,b,c;
	cin>>a>>b>>c;
	cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<(a*c)/2<<endl;
	cout<<fixed<<setprecision(3)<<"CIRCULO: "<< 3.14159 * pow(c,2)<<endl;
	cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<< (a+b)*c / 2<<endl;
	cout<<fixed<<setprecision(3)<<"QUADRADO: "<< b*b<<endl;
	cout<<fixed<<setprecision(3)<<"RETANGULO: "<< a*b<<endl;
	return 0;
}