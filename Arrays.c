/* simple arrays and functions with both call by values and call by reference
takes a number from the user, intitalize the next 4 numbers in the arrays, and prints the sum*/

#include<stdio.h>

void main()
{
    int a[5];

    printf("Enter a number");
    scanf("%d", &a[0]);

    assign(&a[0]);
    sum(&a[0]);
    printf("The array elements are: ");
    for(int i=0;i<5;i++)
    display(a[i]);
}

void assign(int *a)
{

    for(int i=1;i<5;i++)
        {   *(a+i)=0;
            *(a+i)=*(a+i-1)+1;
            printf("%d",*(a+i-1));
        }
        printf("%d\n",*(a+4));
}

void sum (int *a)

{
    int k=0;
    for(int i=0;i<5;i++)
        {
            k = k+*(a+i);
        }

        printf("The sum of array elements is %d\n",k);
}

void display (int a)
{
    printf("%d",a);
}