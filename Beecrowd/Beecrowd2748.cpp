#include <stdio.h>

int main() {
    int i, j;

    for (j = 0; j < 39; j++) {
        printf("-");
    }
        printf("\n");
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 39; j++) {
            if (j == 0 || j == 38) {
                printf("|");
            } else if (i == 0 && j == 9) {
                printf("Roberto");
                j += 6;
            }else if (i == 2 && j == 9) {
                printf("5786");
                j += 3;
            }else if (i == 4 && j == 9) {
                printf("UNIFEI");
                j += 5;
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
for (j = 0; j < 39; j++) {
        printf("-");
    }
    printf("\n");
    return 0;
}