#include<stdio.h>

int swap(int x, int y){
	return x + y;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",swap(a,b));
}