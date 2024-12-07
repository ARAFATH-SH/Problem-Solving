#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;

int main()
{
char x[200]; gets(x);
int s = strlen(x)-1;
cout<<x<<endl<<s;
return 0;
}
