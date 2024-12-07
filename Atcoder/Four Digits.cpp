#include<bits\stdc++.h>
#include<cstring>

using namespace std;

int main(){
	char n[100000];
	cin>>n;
	int length = strlen(n);
	if(length<=3){
		int add = 4 - length;
		cout<<string(add, '0')<<n<<endl;
	}
	else cout<<n<<endl;

return 0;
}