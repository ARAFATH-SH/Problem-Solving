#include <stdio.h>
#include <stdlib.h>


void swapi(int a, int b){

int temp;
temp = a;
a = b;
b = temp;
printf("%d %d ",&a,&b);

}


int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swapi(x,y);
    printf("%d %d",&x,&y);
    return 0;
}

