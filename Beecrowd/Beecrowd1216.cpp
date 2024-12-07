#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[100];
	int sum_of_dis=0; 
	int count = 0;
	int dis;
	char c;
	while(scanf("%[^\n]", &s)!= EOF){
		scanf("%d %c",&dis,&c);
		sum_of_dis+=dis;
		++count;
	}
	printf("%.1f\n",(float)sum_of_dis/count);
	return 0;
}