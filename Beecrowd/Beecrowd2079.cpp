#include <stdio.h>

int main() {
    char samia, akib, prionti;
    scanf("%c\n %c\n %c",&samia ,&akib, &prionti);
    printf("A = %c, B = %c, C = %c\n",samia, akib, prionti);
    printf("A = %c, B = %c, C = %c\n",akib, prionti, samia);
    printf("A = %c, B = %c, C = %c\n",prionti, samia, akib);
    return 0;
}