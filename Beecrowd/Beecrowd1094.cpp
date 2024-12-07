#include<bits/stdc++.h>
using namespace std;

//__builtin_popcount(); // count all set bits
//__builtin_popcountll(); 

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	cin>>n;
	int coelhos = 0;
	int ratos = 0;
	int sapos = 0;
	while(n--){
		int Amount;
		char Type;
		cin>>Amount>>Type;
		if(Type == 'C'){
			coelhos += Amount;
		}
		else if(Type == 'R'){
			ratos += Amount;
		}
		else if(Type == 'S'){
			sapos += Amount;
		}
	}
	int Total = coelhos+ratos+sapos;
	cout<<"Total: "<<Total<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<coelhos<<endl;
	cout<<"Total de ratos: "<<ratos<<endl;
	cout<<"Total de sapos: "<<sapos<<endl;
	cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(float)coelhos*100.00/Total<<" %"<<endl;
	cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(float)ratos*100.00/Total<<" %"<<endl;
	cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(float)sapos*100.00/Total<<" %"<<endl;
	return 0;
}