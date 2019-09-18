/*firstprogram comment*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main ( int x, int y)
{
    int a=3,b=2;
    float d=1,c=1;
    d=a+b;
    x = y = 2;
    int z = x+y;
//printf ( "<format string>", <list of variables> ) ; 

   printf("%f\nHello world\n %d\n%5.2f\nEnter your name:\n",d+b,4+1,4.6);
    char n;
    scanf("\n%c",&n);
    printf("Your name starts with %c",n);
    
return z;
}