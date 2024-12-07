#include<stdio.h>
int main(){
int y,a,m,d,x;
scanf("%d",&x);
y=x/365;
a=400-(365*y);
m=a/30;
d=a-(m*30);
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
return 0;
}
