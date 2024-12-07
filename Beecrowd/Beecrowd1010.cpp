#include <stdio.h>

int main() {

 int C1,U1,C2,U2;
 float P1,P2,amu;
 scanf("%d %d %f %d %d %f",&C1,&U1,&P1,&C2,&U2,&P2);

 amu = (U1*P1 + U2*P2);

 printf("VALOR A PAGAR: R$ %.2f\n",amu);



    return 0;
}
