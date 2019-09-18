#include<stdio.h>

int main()
{
    char i,j;

for (i='G';i>='A';i--)
    {
        for(j='A';j<=i;j++)
        printf("%c",j);
        for(char k=i;k>=j;)
        printf("%d",k);
        printf("\n");
    }
}