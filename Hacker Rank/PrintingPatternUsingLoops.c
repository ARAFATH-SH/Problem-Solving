#include <stdio.h>
#include <math.h>

int maxi(int a, int b){
    return a>b ? a:b;
}

int main() {
    int n,i,j,v;
    scanf("%d",&n);
    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){
            v = maxi(abs(n-i), abs(n-j))+1;
            printf("%d ",v);
        }
        printf("\n");
    }
    return 0;
}
