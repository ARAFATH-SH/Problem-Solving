#include<stdio.h>
#include<math.h>

long long square(long long x){
	return x * x;
}

int main(){
	long long a;
	scanf("%d",&a);
	printf("%d",square(a));
}